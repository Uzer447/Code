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
        int n;
        cin >> n;
        vll v(n);
        ll geven = 0;
        ll godd = 0;
        rep(i, n)
        {
            cin >> v[i];
            if (i % 2 == 0)
            {
                geven = __gcd(geven, v[i]);
            }
            else
            {
                godd = __gcd(godd, v[i]);
            }
        }
        ll d = geven;
        rep(i, n)
        {
            if (i % 2 == 1)
            {
                if (v[i] % geven == 0)
                {
                    d = 0;
                    break;
                }
            }
        }
        if (d == 0)
        {
            d = godd;
            rep(i, n)
            {
                if (i % 2 == 0)
                {
                    if (v[i] % godd == 0)
                    {
                        d = 0;
                        break;
                    }
                }
            }
            cout<<d<<endl;
        }
        else
        {
            cout<<d<<endl;
        }
    }

    return 0;
}
