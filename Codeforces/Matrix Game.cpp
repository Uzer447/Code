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
int n,m;
bool canclaimrow(vector<vector<int>> &v,int i)
{
    for(int j=0;j<m;j++)
    {
        if(v[i][j]==1)
        return false;
    }
    return true;
}
bool canclaimcol(vector<vector<int>> &v,int j)
{
    for(int i=0;i<n;i++)
    {
        if(v[i][j]==1)
        return false;
    }
    return true;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m,0));
        rep(i,n)
        {
            rep(j,m)
            {
                int a;
                cin>>a;
                v[i][j] = a;
            }
        }
        int row=0;
        int col=0;
        for(int i=0;i<n;i++)
        {
            row+=canclaimrow(v,i);
        }
        for(int j=0;j<m;j++)
        {
            col+=canclaimcol(v,j);
        }
        //cout<<row<<" "<<col<<endl;
        if(min(row,col)%2==1)
        {
            cout<<"Ashish"<<endl;
        }
        else
        {
            cout<<"Vivek"<<endl;
        }
    }

    return 0;
}
