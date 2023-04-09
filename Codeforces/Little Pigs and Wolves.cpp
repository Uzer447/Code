#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m,'.'));
    forn(n)
    {
        for(int j=0;j<m;j++)
        {
            char x;
            cin>>x;
            v[i][j] = x;
        }
    }
    int ans=0;
    forn(n)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='W')
            {
                if(i+1<n && v[i+1][j]=='P')
                {
                    ans++;
                    v[i+1][j]='.';
                    v[i][j]='.';
                }
                else if(i-1>=0 && v[i-1][j]=='P')
                {
                    ans++;
                    v[i-1][j]='.';
                    v[i][j]='.';
                }
                else if(j+1<m && v[i][j+1]=='P')
                {
                    ans++;
                    v[i][j+1]='.';
                    v[i][j]='.';
                }
                else if(j-1>=0 && v[i][j-1]=='P')
                {
                    ans++;
                    v[i][j-1]='.';
                    v[i][j]='.';
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
