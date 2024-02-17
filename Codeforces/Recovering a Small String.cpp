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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cntz = n / 26;
        int rem = n % 26;
        vector<char> ans(3);
        if (n <= 28)
            cout << "aa" << char(n - 2 + 96) << endl;
        else if (n > 28 && n <= 53)
        {
            cout << "a" << char(n - 1 - 26 + 96) << "z" << endl;
        }
        else
        {
            cout << char(n - 52 + 96) << "zz" << endl;
        }
    }

    return 0;
}
