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
ll MSB[32];
long long valid_pairs(vector<int> &arr, int N)
{
    memset(MSB,0,sizeof(MSB));
    for (int i = 0; i < N; i++) {
        int MSB_index = log2(arr[i]);
        MSB[MSB_index]++;
    }
    ll ans=0;
    for (int i = 0; i < 32; i++)
    {
        //cout<<ans<<" ";
        if(MSB[i]!=0)
        {
            ans+=((MSB[i]*(MSB[i]-1LL))/2LL);
        }
    }
    return ans;
}
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
        rep(i,n)
        {
            cin>>v[i];
        }
        cout<<valid_pairs(v,n)<<endl;
    }

    return 0;
}
