#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> v(10, vector<char>(10, ' '));
        rep(i, 10)
        {
            rep(j, 10)
            {
                char c;
                cin >> c;
                v[i][j] = c;
            }
        }
    int ans=0;
    rep(i,10)
    {
        rep(j, 10)
        {
            if(v[i][j]=='X')
            {
                if(i==0 || j==0 || i==9 || j==9)
                {
                    ans+=1;
                }
                else if(i==1 || j==1 || i==8 || j==8)
                {
                    ans+=2;
                }
                else if(i==2 || j==2 || i==7 || j==7)
                {
                    ans+=3;
                }
                else if(i==3 || j==3 || i==6 || j==6)
                {
                    ans+=4;
                }
                else
                {
                    ans+=5;
                }
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
