#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
    cin>>v[i];
    }
    sort(v.begin(),v.end());
    int k=1;
    ll ans=0;
    for(auto i:v)
    {
        ans+=abs(i-k);
        k++;
    }    
    cout<<ans<<endl;
    return 0;
}
