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
        cin>>n;
        int mid=n/2;
        int ans=1<<n;
        for(int i=1;i<=mid-1;i++)
        {
            ans+=(1<<i);
        }
        for(int i=mid;i<=n-1;i++)
        {
            ans-=(1<<i);
        }
        cout<<abs(ans)<<endl;
    }

    return 0;
}
