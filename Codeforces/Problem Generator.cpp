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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        mp['A']=0;
        mp['B']=0;
        mp['C']=0;
        mp['D']=0;
        mp['E']=0;
        mp['F']=0;
        mp['G']=0;
        rep(i,n)
        mp[s[i]]++;
        int ans=0;
        for(auto it:mp)
        {
            if(m>it.second)
            {
                ans+=m-it.second;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
