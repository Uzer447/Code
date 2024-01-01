#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        int x=0;
        rep(i, n)
        {
            cin >> v[i];
            x=max(x,v[i]);
        }
        if(v[0]!=x && v[n-1]!=x)cout<<-1<<endl;
        else
        {
            for(int i=n-1;i>=0;i--)cout<<v[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}
