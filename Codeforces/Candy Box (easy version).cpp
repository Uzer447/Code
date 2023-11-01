#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
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
		sort(cnt.rbegin(), cnt.rend());
		int ans = cnt[0];
		int k = cnt[0];
        for(int i=1;i<=n;i++)
        {
            //cout<<v[i].first<<" "<<k<<endl;
            if(k==0)
            break;
            if (cnt[i] >= k)
            {
                ans += k-1;
                k--;
            }
            else
            {
                ans+=cnt[i];
                k=cnt[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
