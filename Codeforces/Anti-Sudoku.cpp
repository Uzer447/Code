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
        vector<vector<int>> v(9,vector<int>(9,0));
        rep(i,9)
        {
            string s;
            cin>>s;
            //cout<<s<<endl;
            rep(j,9)
            {
                v[i][j]=s[j]-'0';
            }
        }
        for(int i=0;i<9;i++)
        {
            rep(j,9)
            {
                if(v[i][j]==2)
                v[i][j]=6;
            }
        }
        rep(i,9)
        {
            rep(j,9)
            {
                cout<<v[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}
