#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m;
    char c;
    cin >> n >> m >> c;
    vector<vector<char>> v(n, vector<char>(m, ' '));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            //cout << x << endl;
            v[i][j] = x;
        }
    }
    unordered_set<char> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == c)
            {
                if (i + 1 < n && v[i + 1][j] != '.' && v[i + 1][j] != c)
                    st.insert(v[i + 1][j]);
                if (i - 1 >= 0 && v[i - 1][j] != '.' && v[i - 1][j] != c)
                    st.insert(v[i - 1][j]);
                if (j + 1 < m && v[i][j + 1] != '.' && v[i][j + 1] != c)
                    st.insert(v[i][j + 1]);
                if (j - 1 >= 0 && v[i][j - 1] != '.' && v[i][j - 1] != c)
                    st.insert(v[i][j - 1]);
            }
        }
    }
    cout << st.size() << endl;

    return 0;
}
