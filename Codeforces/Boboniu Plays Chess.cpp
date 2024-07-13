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
int n,m,x,y;
void func(int i,int j)
{
    cout<<(i+x-2)%n+1<<" "<<(j+y-2)%m+1<<endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    while (t--)
    {
        cin>>n>>m>>x>>y;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                for(int j=m;j>=1;j--)
                {
                    func(i,j);
                }
            }
            else
            {
                for(int j=1;j<=m;j++)
                {
                    func(i,j);
                }
            }
        }
    }

    return 0;
}
