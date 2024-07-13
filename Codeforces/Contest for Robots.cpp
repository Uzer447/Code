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
    int n;
    cin >> n;
    vi r(n);
    vi b(n);
    rep(i, n) cin >> r[i];
    rep(i, n) cin >> b[i];
    int rscore = 0;
    int bscore = 0;
    int x = 0;
    int y=0;
    rep(i, n)
    {
        if (r[i] == 1 && b[i] == 0)
        {
            x++;
        }
        if(r[i]==0 && b[i] ==1)
        {
            y++;
        }
        if(r[i]==1)
        rscore +=1;
        if(b[i]==1)
        bscore +=1;
    }
    if (x == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    if(rscore>bscore)
    {
        cout<<1<<endl;
        return 0;
    }
    y++;
    int ans=y/x;
    if(y%x!=0)
    ans++;
    cout<<ans<<endl;

    return 0;
}
