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
        vll v(n);
        ll extra=0;
        rep(i,n)
        {
            cin>>v[i];
            if(v[i]>=i)
            {
                extra+=v[i]-i;
                v[i]=i;
            }
            else
            {
                int temp=min(extra,i-v[i]);
                v[i]+=min(extra,i-v[i]);
                extra-=temp;
            }
        }
        v[n-1]+=extra;
        int flag=1;
        rep(i,n-1)
        {
            if(v[i+1]<=v[i])
            {
                flag=0;
                break;
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
