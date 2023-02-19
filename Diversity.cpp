#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    unordered_set<char> st;
    for (auto i : s)
        st.insert(i);
    int n = st.size();
    if (s.size() >= k)
    {
        cout << max(0, k - n) << endl;
    }
    else if (s.size() < k)
    {
        cout << "impossible" << endl;
    }

    return 0;
}
