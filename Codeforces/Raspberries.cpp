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
        int n, k;
        cin >> n >> k;
        vi a(n);
        int ans = INT_MAX;
        int flag = 0;
        int cnteven=0;
        rep(i, n)
        {
            cin >> a[i];
            if(a[i]%2==0)cnteven++;
        }
        rep(i, n)
        {
            int x=a[i]%k;
            if (a[i] % k == 0)
            {
                flag = 1;
                break;
            }
            else if (a[i] % k > 0)
            {
                ans = min(ans, k-x);
            }
        }
        if(flag==1)
        cout<<0<<endl;
        else if(k==4)
        {
            if(n==1)
            {
                cout<<k-a[0]%k<<endl;
            }
            else
            {
                ans=min(ans,max(0,2-cnteven));
                cout<<ans<<endl;
            }
        }
        else cout << ans << endl;
    }

    return 0;
}
