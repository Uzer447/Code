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
        int ind=-1;
        rep(i,n)
        {
            cin>>v[i];
            if(ind==-1 && v[i]==1)
            ind=i;
        }
        if(ind==-1)
        {
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        int curr=0;
        for(int i=ind;i<n;i++)
        {
            if(v[i]==1)
            {
                ans+=curr;
                curr=0;
            }
            else
            {
                curr++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
