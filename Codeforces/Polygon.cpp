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
        vector<vector<int>> v(n,vector<int>(n,0));
        rep(i,n)
        {
            string s;
            cin>>s;
            rep(j,n)
            {
                v[i][j]=s[j]-'0';
            }
        }
        int flag=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==1)
                {
                    if(i+1==n || j+1==n || v[i+1][j]==1 || v[i][j+1]==1)
                    {
                        continue;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==0)
            break;
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
