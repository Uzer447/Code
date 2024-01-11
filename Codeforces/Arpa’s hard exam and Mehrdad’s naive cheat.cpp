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
    if (n == 0)
        cout << 1 << endl;
    else
    {
        n %= 4;
        if (n == 0)
            cout << 6 << endl;
        else if (n == 1)
            cout << 8 << endl;
        else if (n == 2)
            cout << 4 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}
