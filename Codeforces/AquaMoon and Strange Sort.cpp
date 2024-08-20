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
        vector<vector<int>> cnt(100005,vector<int>(2,0));
        rep(i,n)
        {
            cin>>v[i];
            cnt[v[i]][i%2]++;
        }
        sort(vall(v));
        rep(i,n)
        {
            cnt[v[i]][i%2]--;
        }
        int flag=1;
        rep(i,n)
        {
            if(cnt[v[i]][0]!=0 || cnt[v[i]][1]!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}
