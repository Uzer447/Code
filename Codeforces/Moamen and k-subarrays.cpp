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
        int n,k;
        cin>>n>>k;
        vector<pii> v(n);
        rep(i,n)
        {
            cin>>v[i].first;
            v[i].second=i;
        }
        sort(vall(v));
        int temp=0;
        for(int i=1;i<n;i++)
        {
            if(v[i-1].second+1!=v[i].second)
            {
                temp++;
            }
        }
        if(temp+1<=k)
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
