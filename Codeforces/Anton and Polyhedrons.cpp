#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    unordered_map<string,int> mp;
    mp["Tetrahedron"] =4;
    mp["Cube"] = 6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]= 20;

    int t;
    cin >> t;
    ll ans=0;
    while (t--)
    {
        string s;
        cin>>s;
        ans+=mp[s];
    }
    cout<<ans<<endl;
    return 0;
}
