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
        rep(i,n)
        {
            cin>>v[i];
        }
        vector<pii> ans;
        for(int i=0;i<n-1;i++)
        {
            int pos=i;
            for(int j=i+1;j<n;j++)
            {
                if(v[j]<v[pos])
                pos=j;
            }
            if(pos>i)
            {
                ans.pb({i,pos});
                int opt=v[pos];
                for(int j=pos;j>i;j--)
                {
                    v[j]=v[j-1];
                }
                v[i]=opt;
            }
        }
        cout<<ans.size()<<endl;
        for(auto &it:ans)
        {
            cout<<it.first+1<<" "<<it.second+1<<" "<<it.second-it.first<<endl;
        }
    }

    return 0;
}
