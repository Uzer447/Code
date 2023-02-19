#include <bits/stdc++.h>
#define ll long long
using namespace std;
int LCSubStr(string s, string t, int n, int m)
{

    // Create DP table
    int dp[2][m + 1];
    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
            {
                dp[i % 2][j] = dp[(i - 1) % 2][j - 1] + 1;
                if (dp[i % 2][j] > res)
                    res = dp[i % 2][j];
            }
            else
                dp[i % 2][j] = 0;
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int l1 = a.length();
        int l2 = b.length();
        int temp =LCSubStr(a, b, l1, l2);
        cout << temp << endl;
    }

    return 0;
}