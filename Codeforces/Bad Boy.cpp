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
int manhattanDistance(int x1, int y1, int x2, int y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        ll p=x,q=y,r=x,s=y;
        ll corners[4][2] = {{1, 1}, {1, m}, {n, 1}, {n, m}};
        ll maxDistance = 0;
        for (ll i = 0; i < 4; ++i)
        {
            for (ll j = i; j < 4; ++j)
            {
                ll x1 = corners[i][0], y1 = corners[i][1];
                ll x2 = corners[j][0], y2 = corners[j][1];
                ll dist1 = manhattanDistance(x, y, x1, y1);
                ll dist2 = manhattanDistance(x1, y1, x2, y2);
                ll dist3 = manhattanDistance(x2, y2, x, y);
                ll totalDistance = dist1 + dist2 + dist3;
                //cout<<totalDistance<<endl;
                if(totalDistance>maxDistance)
                {
                    maxDistance = max(maxDistance, totalDistance);
                    p=x1;q=y1;
                    r=x2;s=y2;
                }
            }
        }
        cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
    }

    return 0;
}
