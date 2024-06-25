#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int K;
bool cmp(int a,int b)
{
    if(a%K<b%K)
    return true;
    else if(a%K==b%K)
    return a<b;
    return false;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        K=k;
        ll cnt=0;
        vector<ll> v(n);
        rep(i, n)
        {
            cin>>v[i];
        }
        //sort(vall(v));
        unordered_map<ll,ll> mp;
        for(auto &it:v)
        {
            mp[it%k]++;
        }
        for(auto &it:mp)
        {
            if(it.second%2==1)
            {
                cnt++;
            }
        }
        if(cnt>1)
        cout<<-1<<endl;
        else
        {
            ll ans=0;
            sort(vall(v),cmp);
            for(auto &it:v)
            cout<<it<<" ";
            cout<<endl;
            for(int i=0;i<n-1;i+=2)
            {
                ll diff=abs(v[i+1]-v[i]);
                ans+=diff/k;
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
