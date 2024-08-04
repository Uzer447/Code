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
const int N = 3e5;
int v[N], n;
int isValley(int i)
{
    return (i > 0 && i < n - 1 && v[i] < v[i - 1] && v[i] < v[i + 1]);
}
int isHill(int i)
{
    return (i > 0 && i < n - 1 && v[i] > v[i - 1] && v[i] > v[i + 1]);
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        //int n;
        cin >> n;
        rep(i, n)
        {
            cin >> v[i];
        }
        int s = 0;
        vi ispeak(n, 0);
        rep(i, n)
        {
            if (isHill(i) || isValley(i))
            {
                ispeak[i] = 1;
                s++;
            }
        }
        int ans = s;
        for (int i = 1; i < n - 1; i++)
        {
            int temp = v[i];
            v[i] = v[i - 1];
            ans = min(ans, s - ispeak[i] - ispeak[i - 1] - ispeak[i + 1] + isHill(i) + isHill(i + 1) + isHill(i - 1) + isValley(i) + isValley(i + 1) + isValley(i - 1));
            v[i] = v[i + 1];
            ans = min(ans, s - ispeak[i] - ispeak[i - 1] - ispeak[i + 1] + isHill(i) + isHill(i + 1) + isHill(i - 1) + isValley(i) + isValley(i + 1) + isValley(i - 1));
            v[i] = temp;
        }
        cout << ans << endl;
    }

    return 0;
}
