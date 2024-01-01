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
    int n, d;
    cin >> n >> d;
    vi v(n);
    rep(i, n)
            cin >>
        v[i];
    sort(vall(v), greater<int>());
    int ans = 0;
    int rem=n;
    rep(i, n)
    {
        int x=(d+1)/v[i];
        if((d+1)%v[i]!=0)x++;
        if (rem>=x)
        {
            ans++;
            rem-=x;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
