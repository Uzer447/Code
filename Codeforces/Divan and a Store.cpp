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
        ll n,l,r,k;
        cin>>n>>l>>r>>k;
        vll v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        sort(vall(v));
        ll cnt=0;
        rep(i,n)
        {
            if(v[i]<l || v[i]>r)
            continue;
            if(v[i]>k)
            {
                break;
            }
            k-=v[i];
            cnt++;
        }
        print(cnt);
    }

    return 0;
}
