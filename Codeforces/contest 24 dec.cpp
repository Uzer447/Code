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
        int n,k;
        cin>>n>>k;
        vector<vi> v(n,vi (n,0));
        if(k%n!=0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
            int x=k/n;
            rep(i,x)
            {
                rep(j,n)
                {
                    v[i][j]=1;
                }
            }
            rep(i,n)
            {
                rep(j,n)
                cout<<v[i][j]<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}
