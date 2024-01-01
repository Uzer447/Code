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
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    vi v(n);
    rep(i,n)
    {
        cin>>v[i];
        mp[v[i]]=i+1;
    }
    rep(i,n)
    {
        cout<<mp[i+1]<<" ";
    }
        cout<<endl;

    return 0;
}
