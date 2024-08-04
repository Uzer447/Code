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
        int c0=0,c1=0,c2=0;
        rep(i,n)
        {
            cin>>v[i];
            v[i]%=3;
            if(v[i]==0)
            c0++;
            else if(v[i]==1)
            c1++;
            else
            c2++;
        }
        sort(vall(v));
        int x=n/3;
        int y=2*x;
        //x--;
        y--;
        //cout<<x<<" "<<y<<endl;
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            if(c1==x && c0==x && c2==x)
            break;
            if(max(c0,max(c1,c2))==c0)
            {
                if(c2<=c1)
                {
                    ans+=2;
                    c2++;
                    c0--;
                }
                else
                {
                    ans+=1;
                    c1++;
                    c0--;
                }
            }
            else if(max(c0,max(c1,c2))==c1)
            {
                if(c0<=c2)
                {
                    ans+=2;
                    c0++;
                    c1--;
                }
                else
                {
                    ans+=1;
                    c2++;
                    c1--;
                }
            }
            else if(max(c0,max(c1,c2))==c2)
            {
                if(c1<=c0)
                {
                    ans+=2;
                    c1++;
                    c2--;
                }
                else
                {
                    ans+=1;
                    c0++;
                    c2--;
                }
            }
            // if(i>y)
            // {
            //     if(v[i]==1)
            //     {
            //         ans+=1;
            //     }
            //     if(v[i]==0)
            //     {
            //         ans+=2;
            //     }
            //     v[i]=2;
            // }
            // else if(i<=x)
            // {
            //     if(v[i]==1)
            //     {
            //         ans+=2;
            //     }
            //     if(v[i]==2)
            //     {
            //         ans+=1;
            //     }
            //     v[i]=0;
            // }
            // else
            // {
            //     if(v[i]==2)
            //     {
            //         ans+=2;
            //     }
            //     if(v[i]==0)
            //     {
            //         ans+=1;
            //     }
            //     v[i]=1;
            // }
        }
        cout<<ans<<endl;
    }

    return 0;
}
