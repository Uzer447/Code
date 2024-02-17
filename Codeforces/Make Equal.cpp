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
        vi v;
        ll sum=0;
        //v.pb(INT_MIN);
        rep(i,n)
        {
            int x;
            cin>>x;sum+=x;
            v.pb(x);
        }
        if(n==1)
        cout<<"YES"<<endl;
        else
        {
            int x=sum/n;
            int diff=0;
            int flag=1;
            rep(i,n)
            {
                diff+=x-v[i];
                if(diff>0)
                {
                    flag=0;
                    break;
                }
            }
            if(diff==0 && flag==1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
            // int maxi=v[0];
            // int flag=1;
            // for(int i=1;i<n;i++)
            // {
            //     if(v[i]>=maxi)
            //     {
            //         flag=0;
            //         break;
            //     }
            //     maxi=max(maxi,v[i]);
            // }
            // int peak=0;
            // for(int i=1;i<n-1;i++)
            // {
            //     if(v[i]>=v[i-1] && v[i]>=v[i+1])
            //     {
            //         peak++;
            //     }
            // }
            // if(flag==1)
            // cout<<"YES"<<endl;
            // else
            // cout<<"NO"<<endl;
        }
    }

    return 0;
}
