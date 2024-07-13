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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n;)
        {
            int j = i + 1;
            for (; j < n && s[j] != '1'; j++)
            {
            }
            int left = s[i] == '1' ? k : 0;
            int right = j < n && s[j] == '1' ? k : 0;
            int len = j - i;
            if (left == k)
            {
                len--;
            }
            len -= left + right;
            if (len > 0)
            {
                ans += (len + k) / (k + 1);
            }
            i = j;
        }
        cout << ans << endl;
    }

    return 0;
}
