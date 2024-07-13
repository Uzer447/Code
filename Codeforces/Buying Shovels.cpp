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
        int n,k;
        cin>>n>>k;
        if(k>=n)
        {
            cout<<1<<endl;
            continue;
        }
        int ans=INT_MIN;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i<=k)
                {
                    ans=max(ans,i);
                }
                if(n/i!=i)
                {
                    if(n/i<=k)
                    ans=max(ans,n/i);
                }
            }
        }
        cout<<n/ans<<endl;
    }

    return 0;
}
