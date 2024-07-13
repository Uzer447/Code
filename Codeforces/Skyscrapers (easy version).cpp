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
    vi v(n);
    rep(i,n)
    cin>>v[i];
    vi ans;
    int mn=v[0];
    for(int i=0;i<n;i++)
    {
        mn=min(mn,v[i]);
        ans.push_back(min(v[i],mn));
    }
    for(auto &it:ans)
    cout<<it<<" ";
    cout<<endl;
    return 0;
}
