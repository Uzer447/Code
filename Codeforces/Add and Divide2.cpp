#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define print(X) cout << X << endl;
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
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int ans = a + 3;
        int cnt;
        for (int y = ((b < 2) ? 2 - b : 0); y < ans; y++)
        {
            int temp = b + y;
            int tempa = a;
            cnt = y;
            while (tempa > 0)
            {
                tempa = tempa / temp;
                cnt++;
            }
            if (cnt < ans)
                ans = cnt;
        }
        cout << ans << endl;
    }

    return 0;
}
