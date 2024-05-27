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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        long long f = (n) / k;
        if(n%k!=0)
        f++;
        k *= f;
        int x = k / n;
        if (k % n != 0)
            x++;
        ll low = x;
        ll high = k - (n - 1);
        while (low < high)
        {
            ll mid = low + (high - low) / 2;
            if (mid * n >= k)
                high = mid - 1;
            else
                low = mid + 1;
        }
        cout << low << endl;
    }

    return 0;
}