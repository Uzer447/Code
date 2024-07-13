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
        int x0,x1,x2,y0,y1,y2;
        cin>>x0>>x1>>x2>>y0>>y1>>y2;
        int m=min(x0,y2);
        x0-=m;
        y2-=m;
        m=min(x1,y0);
        x1-=m;
        y0-=m;
        m=min(x2,y1);
        x2-=m;
        y1-=m;
        ll sum=2*m;
        m=min(x1,y2);
        sum-=2*m;
        cout<<sum<<endl;
    }

    return 0;
}
