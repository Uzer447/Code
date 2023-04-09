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
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
    cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<(v[n-1]+v[0])/2<<endl;

    return 0;
}
