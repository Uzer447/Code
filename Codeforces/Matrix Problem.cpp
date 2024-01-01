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
    vector<vector<int>> arr(1001, vector<int>(1001, 0));
    vector<vector<int>> known = {{9, 1, 7}, {5, 4, 8}, {6, 3, 2}};
    rep(i, 3)
    {
        rep(j, 3)
        {
            arr[i + 1][j + 1] = known[i][j];
        }
    }
    ll rowsum=17;
    ll colsum=20;
    for (int i = 4; i <= 1000; i++)
    {
        int x = (i - 1) * (i - 1) + 1;
        for (int j = 1; j <= i; j++)
        {
            arr[j][i] = x;
            x++;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            arr[i][j] = x;
            x++;
        }
        if (rowsum % 2 != arr[1][i] % 2)
        {
        }
        else
        {
            swap(arr[2][i], arr[1][i]);
        }
        if (colsum % 2 != arr[i][1] % 2)
        {
        }
        else
        {
            swap(arr[i][1], arr[i][2]);
        }
        rowsum += arr[1][i];
        colsum += arr[i][1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
