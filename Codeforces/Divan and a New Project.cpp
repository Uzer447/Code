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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vi v;
        vi b;
        unordered_map<int,int> mp;
        rep(i,n)
        {
            int a;
            cin>>a;
            b.pb(a);
            v.pb(a);
            mp[a]=i;
        }
        sort(v.begin(),v.end(),greater<int>());
        int ans=0;
        unordered_map<int,int> mp;
        int k=1;
        for(int i=0;i<n;i++)
        {
            

        }
        rep(i,n)
        {
            cout<<mp[b[i]]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
