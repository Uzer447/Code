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
        vector<pii> v;
        rep(i,n)
        {
            int x;
            cin>>x;
            v.push_back({x,0});
        }
        vector<pii> sorted;
        rep(i,n)
        {
            sorted.push_back({v[i].first,i});
        }
        sort(vall(sorted));
        int mini=sorted[0].first;
        for(int i=0;i<n;i++)
        {
            if(sorted[i].first==v[i].first)
            continue;
            if(__gcd(sorted[i].first,v[i].first)==mini)
            {
                swap(v[i],v[sorted[i].second]);
                swap(sorted[i],sorted)
            }
        }
        for(auto it:v)
        cout<<it.first<<" ";
        cout<<endl;
    }

    return 0;
}
