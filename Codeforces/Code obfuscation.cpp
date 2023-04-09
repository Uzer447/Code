#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    int n = s.size();
    stack<char> st;
    vector<int> v(26, 0);
    int flag = 1;
    if (s[0] != 'a')
        flag = 0;
    else
    {
        forn(n)
        {
            if (v[s[i] - 'a'] == 0)
            {
                if (st.empty())
                    st.push(s[i]);
                else
                {
                    if (s[i] - st.top() == 1)
                    {
                        st.push(s[i]);
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                v[s[i] - 'a'] = 1;
            }
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
