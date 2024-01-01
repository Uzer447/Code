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
    int n, m;
    cin >> n >> m;
    if (m % n != 0)
        cout << -1 << endl;
    else if (n == m)
        cout << 0 << endl;
    else
    {
        int d = m/n;
        int cnt=0;
        while (d%2==0)
        {
            d/=2;
            cnt++;
        }
        while(d%3==0)
        {
            d/=3;
            cnt++;
        }
        if (d == 1)
            cout << cnt << endl;
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
