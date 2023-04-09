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
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]=i;
    }
    int m;
    cin>>m;
    ll vas=0;
    ll pet=0;
    while(m--)
    {
        int x;
        cin>>x;
        vas+=mp[x]+1;
        pet+=(n-mp[x]);
    }
    cout<<vas<<" "<<pet<<endl;
    return 0;
}
