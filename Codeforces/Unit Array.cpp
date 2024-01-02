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
        int n;
        cin>>n;
        vi v(n);
        int x=0;
        int y=0;
        rep(i,n)
        {
            cin>>v[i];
            if(v[i]==-1)
            x++;
            else
            y++;
        }
        if(n%2==1)
        {
            y=n/2+1;
            x=n-y;
        }
        else
        {
            y=
        }
    }

    return 0;
}
