#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
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
        vi v(n);
        int first=-1;
        int last=-1;
        rep(i,n)
        {
            cin>>v[i];
            if(v[i]>0 && first==-1)
            {
                first=i;
            }
            if(v[i]>0)
            {
                last=i;
            }
        }
        vi psum(n,0);
        psum[0]=v[0];
        for(int i=1; i<n; i++)
        {
            psum[i]=psum[i-1]+v[i];
        }
        int ans=0;
        for(int i=first;i<=last;i++)
        {
            if(v[i]==0)
            {
                int left=psum[i-1];
                int right=psum[n-1]-psum[i];
                if(abs(right-left)==1)
                {
                    ans++;
                }
                else if(abs(right-left)==0)
                {
                    ans+=2;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
