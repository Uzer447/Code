#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
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
        ll n;
        cin>>n;
        vll v(n);
        rep(i,n)
        cin>>v[i];
        ll k=1;
        int flag=-1;
        for(int i=0;i<n-1;i++)
        {
            k*=v[i];
            ll prod=1;
            for(int j=i+1;j<n;j++)
            {
                prod*=v[j];
            }
            if(prod==k)
            {
                flag=i;
                break;
            }
        }
        if(flag!=-1)
        cout<<flag+1<<endl;
        else
        cout<<flag<<endl;
    }

    return 0;
}
