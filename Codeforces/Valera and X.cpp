#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n, ' '));
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> v[i][j];
        }
    }
    set<char> st;
    set<char> stt;
    rep(i, n)
    {
        rep(j, n)
        {
            if (i == j || i == n - j - 1)
            {
                st.insert(v[i][j]);
            }
            else
            {
                stt.insert(v[i][j]);
            }
        }
    }
    //cout << st.size() << stt.size() << endl;
    if (st.size() == 1 && stt.size() == 1 && st != stt)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
