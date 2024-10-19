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
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,rb,cb,rd,cd;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        int dr=1;
        int dc=1;
        int x=rb;
        int y=cb;
        int time=0;
        while(x!=rd && y!=cd)
        {
            if(x>=n)
            dr=-1*dr;
            if(y>=m)
            dc=-1*dc;
            time++;
            x=x+dr;
            y=y+dc;
        }
        cout<<time<<endl;
    }

    return 0;
}
