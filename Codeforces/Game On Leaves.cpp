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
        int n,x;
        cin>>n>>x;
        vi deg(n+1,0);
        rep(i,n-1)
        {
            int a,y;
            cin>>a>>y;
            deg[a]++;
            deg[y]++;   
        }
        if(deg[x]<=1)
        {
            cout<<"Ayush"<<endl;
            continue;
        }
        if(n%2==0)
        {
            cout<<"Ayush"<<endl;
        }
        else
        {
            cout<<"Ashish"<<endl;
        }
    }

    return 0;
}
