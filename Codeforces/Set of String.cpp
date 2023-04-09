#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> v(26, 0);
    vector<string> ans;
    string temp = "";
    unordered_set<char> st;
    forn(s.size())
        st.insert(s[i]);
    if (k == 1)
    {
        cout<<"YES"<<endl;
        cout << s << endl;
    }    
    else if (st.size() >= k)
    {
        cout << "YES" << endl;
        v[s[0] - 'a'] = 1;
        for (int i = 0; i < s.size(); i++)
        {
            // st.insert(s[i]);
            if (v[s[i] - 'a'] == 0)
            {
                v[s[i] - 'a'] = 1;
                ans.push_back(temp);
                temp = s[i];
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
        if (ans.back() != temp)
        {
            ans.push_back(temp);
        }
        if (ans.size() > k)
        {
            for (int i = k; i < ans.size(); i++)
            {
                ans[k - 1] = ans[k - 1] + ans[i];
            }
        }
        forn(k)
        {
            cout << ans[i] << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
