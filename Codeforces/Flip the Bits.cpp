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
        string a,b;
        cin>>a>>b;
        vi x(n+1);
        vi y(n+1);
        rep(i,n)
        {
            x[i+1]=(a[i]-'0');
            y[i+1]=(b[i]-'0');
        }
        vector<int> ones(n+1);
        vector<int> zero(n+1);
        ones[0] =0;
        zero[0] =0;
        for(int i=1;i<=n;i++)
        {
            if(x[i]==1)
            {
                ones[i]=(ones[i-1]+1);
                zero[i]=(zero[i-1]);
            }
            else
            {
                zero[i]=(zero[i-1]+1);
                ones[i]=(ones[i-1]);
            }
        }
        // rep(i,n)
        // {
        //     cout<<ones[i+1]<<" ";
        // }
        // cout<<endl;
        // rep(i,n)
        // {
        //     cout<<zero[i]<<" ";
        // }
        // cout<<endl;
        int flag=1;
        int flip=0;
        for(int i=n;i>0;i--)
        {
            if(flip==0 && x[i]!=y[i])
            {
                if(ones[i]==zero[i])
                {
                    flip=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flip==1 && x[i]==y[i])
            {
                if(ones[i]==zero[i])
                {
                    flip=0;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}
