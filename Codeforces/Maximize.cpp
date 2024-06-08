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
        int x;
        cin>>x;
        int maxi=0;
        int ans=0;
        for(int y=1;y<x;y++)
        {
            int a=__gcd(x,y)+y;
            if(a>maxi)
            {
                maxi=a;
                ans=y;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
