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
        vector<vector<char>> v(n,vector<char>(m,' '));
        rep(i,n)
        {
            rep(j,m)
            {
                char c;
                cin>>c;
                v[i][j]=c;
            }
        }
        int cnt=0;
        rep(i,n-1)
        {
            if(v[i][m-1]=='R')cnt++;
        }
        rep(j,m-1)
        {
            if(v[n-1][j]=='D')cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
