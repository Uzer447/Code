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
#define print(X) cout<<X<<endl;
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
        vi v(n);
        vector<vector<int>> hash(n+1);
        unordered_map<int,int> mp;
        rep(i,n)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        hash[0]=v;
        rep(i,n)
        {
            rep(j,n)
            {
                int temp=mp[v[j]];
                v[j]=temp;
            }
            rep(j,n)
            {
                mp[v[j]]=0;
            }
            rep(j,n)
            {
                mp[v[j]]++;
            }
            hash[i+1]=v;
        }
        // for(auto it:hash)
        // {
        //     for(int k:it)
        //     {
        //         cout<<k<<" ";
        //     }
        //     cout<<endl;
        // }
        int q;
        cin>>q;
        while(q--)
        {
            int x,k;
            cin>>x>>k;
            x--;
            if(k<=n)
            {
                cout<<hash[k][x]<<endl;
            }
            else
            {
                cout<<hash[n][x]<<endl;
            }
        }
    }

    return 0;
}
