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
int ask(int x, int y)
{
    cout << "? " << x + 1 << ' ' << y + 1 << endl;
    int z;
    cin >> z;
    return z;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans(n, -1);
    int mx = 0;
    for (int i = 1; i < n; i++)
    {
        int a = ask(mx, i);
        int b = ask(i, mx);
        if (a > b)
        {
            ans[mx] = a;
            mx = i;
        }
        else
        {
            ans[i] = b;
        }
    }
    ans[mx] = n;
    cout << "! ";
    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
