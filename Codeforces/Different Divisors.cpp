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
        int x;
        cin >> x;
        vector<int> p;
        for (int i = x + 1;; i++)
        {
            int t = 1;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    t = 0;
                    break;
                }
            }
            if (t)
            {
                p.push_back(i);
                break;
            }
        }
        for (int i = p.back() + x;; i++)
        {
            int t = 1;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    t = 0;
                    break;
                }
            }
            if (t)
            {
                p.push_back(i);
                break;
            }
        }
        cout << min(1ll * p[0] * p[1], 1ll * p[0] * p[0] * p[0]) << "\n";
    }

    return 0;
}
