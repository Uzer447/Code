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
    string s;
    cin >> s;
    int x = 0, y = 0;
    int lastzero = 0;
    int ans=0;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        //cout<<x<<" "<<y<<endl;
        if (s[i] == '(')
        {
            cnt++;
            x++;
            y++;
            if (y == 0)
            {
                ans += x - lastzero;
            }
        }
        else
        {
            cnt--;
            x++;
            y--;
        }
        if(y==0)
        lastzero = x;
    }
    if(cnt!=0)
    cout<<-1<<endl;
    else
    cout<<ans<<endl;

    return 0;
}
