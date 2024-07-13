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
    int t=1;
    while (t--)
    {
        int n, q, x, sum2 = 0, sum4 = 0;
        char type;
        unordered_map<int,int> cnt;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> x;
            sum2 -= cnt[x] / 2;
            sum4 -= cnt[x] / 4;
            cnt[x]++;
            sum2 += cnt[x] / 2;
            sum4 += cnt[x] / 4;
        }
        cin >> q;
        for (int i = 1; i <= q; ++i)
        {
            cin >> type >> x;
            sum2 -= cnt[x] / 2;
            sum4 -= cnt[x] / 4;
            if (type == '+')
                cnt[x]++;
            else
                cnt[x]--;
            sum2 += cnt[x] / 2;
            sum4 += cnt[x] / 4;
            if (sum4 >= 1 && sum2 >= 4)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        return 0;
    }
}
