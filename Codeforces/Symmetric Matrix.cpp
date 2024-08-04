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
bool isSymmetric(vector<vector<int>> &mat, int N)
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] != mat[j][i])
                return false;
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
        int n,m;
        cin>>n>>m;
        int flag=1;
        if((m*m)%4!=0)
        {
            flag=0;
        }
        bool sym=false;
        rep(i,n)
        {
            vector<vector<int>> mat(2,vector<int>(2));
            rep(i,2)
            {
                rep(j,2)
                {
                    cin>>mat[i][j];
                }
            }
            sym=sym|isSymmetric(mat,2);
        }
        if(flag && sym)
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
