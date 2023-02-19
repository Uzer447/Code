#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        vector<vector<char>> v(n,vector<char>(m,' '));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                char a;
                cin>>a;
                v[i][j]=a;
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(j+1<m && v[i][j]=='.' && v[i][j+1]=='.')
                {
                    int one=x*2;
                    int two=y;
                    if(one<two)
                    {
                        ans+=one;
                    }
                    else
                    {
                        ans+=two;
                    }
                    j++;
                }
                else if(v[i][j]=='.')
                {
                    ans+=x;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}