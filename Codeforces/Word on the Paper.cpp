#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> v(8,vector<char>(8,' '));
        int n=8;
        forn(n)
        {
            for(int j = 0; j < n; j++)
            {
                char c;
                cin>>c;
                v[i][j]=c;
            }
        }
        string ans="";
        forn(n)
        {
            for(int j = 0; j < n; j++)
            {
                if(v[j][i]!='.')
                {
                    ans=ans+v[j][i];
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
