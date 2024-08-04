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
    int t=1;
    while (t--)
    {
        int n;
        cin>>n;
        vi v(n);
        vi ans(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        sort(vall(v));
        int j=0;
        for(int i=1;i<n;i+=2)
        {
            ans[i]=v[j];
            j++;
        }
        for(int i=0;i<n;i+=2)
        {
            ans[i]=v[j];
            j++;
        }
        int cnt=0;
        for(int i=1;i<=n-2;i++)
        {
            if(ans[i]<ans[i-1] && ans[i]<ans[i+1])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }

    return 0;
}
