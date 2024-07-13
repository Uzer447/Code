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
    vi a(n);
    unordered_map<int, int> mp;
    rep(i, n)
    {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    if (a[0] > 1)
    {
        cout << -1 << endl;
        return 0;
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i >= 1 && a[i] != a[i - 1])
            cout << a[i - 1] << " ";
        else
        {
            while (mp[j] == 1)
                j++;
            mp[j] = 1;
            cout << j << " ";
        }
    }
    cout << endl;
    return 0;
}
