#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, t, c;
    cin >> n >> t >> c;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    multiset<int> st;
    for (int i = 0; i < c; i++)
    {
        st.insert(v[i]);
    }
    // for (auto it : st)
    //     cout << it << " ";
    // cout << endl;
    int ans = 0;
    int i = 0;
    while (true)
    {
        if (i + c > n)
            break;
        if (*(--st.end()) <= t)
            ans++;
        auto it = st.find(v[i]);
        st.erase(it);
        st.insert(v[i + c]);
        i++;
        }
    cout << ans << endl;
    return 0;
}
