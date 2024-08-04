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
ll getS(ll x)
{
    return x * (x + 1) / 2;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll cnt=0;
        for(int i=1;getS((1LL<<i)-1)<=x;i++)
        {
            cnt++;
            x-=getS((1LL<<i)-1);
        }
        cout << cnt << endl;
    }

    return 0;
}
