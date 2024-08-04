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
ll N=1000000000000L;
unordered_set<ll> cubes;
void precalc()
{
    for(ll i=1;i*i*i<=N;i++)
    {
        cubes.insert(i*i*i);
    }
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    precalc();
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        int flag = 0;
        for (ll i = 1; i * i * i <= x; i++)
        {
            if (cubes.count(x - (i * i * i)))
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            yes
        }
        else
        {
            no
        }
    }

    return 0;
}
