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
        ll n,a,b;
        cin>>n>>a>>b;
        if(b==1)
        {
            yes;
            continue;
        }
        if(a==1)
        {
            if((n-1)%b==0)
            {
                yes;
            }
            else
            {
                no;
            }
            continue;
        }
        ll x=1;
        int flag=0;
        while(x<=n)
        {
            if((n-x)%b==0)
            {
                flag=1;
                break;
            }
            x*=a;
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
