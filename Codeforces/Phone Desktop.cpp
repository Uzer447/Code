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
        int x,y;
        cin >> x >>y;
        int b=y/2;
        if(y%2!=0)
        b++;
        x-=15*b-4*y;
        x=max(0,x);
        b+=(x+15-1)/15;
        cout<<b<<endl;
    }

    return 0;
}
