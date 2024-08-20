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
        string s;
        cin >> s;
        bool solved = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                solved = true;
                if (i >= n / 2)
                {
                    cout << 1 << " " << i + 1 << " " << 1 << " " << i << endl;
                    break;
                }
                else
                {
                    cout << i + 2 << " " << n << " " << i + 1 << " " << n << endl;
                    break;
                }
            }
        }
        if (!solved)
        {
            cout << 1 << " " << n - 1 << " " << 2 << " " << n << endl;
        }
    }

    return 0;
}
