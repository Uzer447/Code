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
    vector<vector<char>> v(n,vector<char>(n,' '));
    rep(i,n)
    {
        rep(j,n)
        {
            char c;
            cin>>c;
            v[i][j]=c;
        }
    }
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};
    rep(i,n)
    {
        rep(j,n)
        {
            int cnt=0;
            for(int k=0;k<4;k++)
            {
                int nrow=i+delrow[k];
                int ncol=j+delcol[k];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && v[nrow][ncol]=='o')
                cnt++;
            }
            if(cnt%2==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
