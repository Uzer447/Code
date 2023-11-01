#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
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
        int n, m;
        cin >> n >> m;
        n%=m;
        int b = m / __gcd(n, m);
        int a = n / __gcd(n, m);
        if (__builtin_popcount(b) > 1)
        {
            cout<<-1<<endl;
        }
        else
        cout << 1LL* m * (__builtin_popcount(a)) - n << endl;
    }

    return 0;
}
