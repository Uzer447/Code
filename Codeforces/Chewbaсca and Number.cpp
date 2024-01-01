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
    string s;
    cin >> s;
    if (s.size() == 1 && s[0] == '9')
    {
        cout << 9 << endl;
    }
    else
    {
        rep(i, s.size())
        {
            int x = s[i] - '0';
            if (9 - x < x)
            {
                x = 9 - x;
                s[i] = to_string(x)[0];
            }
        }
    cout << s << endl;
    }
    return 0;
}
