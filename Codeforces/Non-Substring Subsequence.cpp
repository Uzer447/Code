#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define print(X) cout << X << endl;
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, Q;
        string s;
        cin >> n >> Q >> s;
        while (Q--)
        {
            int l, r;
            cin >> l >> r;
            --l;
            --r;
            bool bad = true;
            for (i = 0; i < l and bad; i++)
                if (s[i] == s[l])
                    bad = false;
            for (i = r + 1; i < n and bad; i++)
                if (s[i] == s[r])
                    bad = false;
            cout << (bad ? "NO" : "YES") << '\n';
        }
    }
    return 0;
}
