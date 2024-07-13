#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
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
		vector<int> cnt(n + 1);
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			++cnt[x];
		}
		int ans = 0;
		for (int s = 2; s <= 2 * n; ++s) {
			int cur = 0;
			for (int i = 1; i < (s + 1) / 2; ++i) {
				if (s - i > n) continue;
				cur += min(cnt[i], cnt[s - i]);
			}
			if (s % 2 == 0) cur += cnt[s / 2] / 2;
			ans = max(ans, cur);
		}
		cout << ans << endl;
    }

    return 0;
}
