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
        int n;
        cin >> n;
        vi v(n);
        int cnt0=0;
        rep(i, n)
        {
            cin >> v[i];
            if(v[i]==0)
            cnt0++;
        }
        int cnt1 = n - cnt0;
        if (cnt0 >= n / 2) {
            cout << cnt0 << '\n';
            for (int i = 0; i < cnt0; i++) cout << 0 << ' ';
        } else {
            cout << cnt1 - cnt1 % 2 << '\n';
            for (int i = 0; i < cnt1 - cnt1 % 2; i++) {
                cout << 1 << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
