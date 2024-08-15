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
bool canPartition(vector<int> &nums)
{
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum % 2 == 1)
        return false;
    int k = sum / 2;
    vector<vector<bool>> dp(n, vector<bool>(k + 1, false));
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = true;
    }
    if (nums[0] <= k)
    {
        dp[0][nums[0]] = true;
    }
    for (int ind = 1; ind < n; ind++)
    {
        for (int target = 1; target <= k; target++)
        {
            bool notTaken = dp[ind - 1][target];
            bool taken = false;
            if (nums[ind] <= target)
            {
                taken = dp[ind - 1][target - nums[ind]];
            }
            dp[ind][target] = notTaken || taken;
        }
    }
    return dp[n - 1][k];
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        int ind = -1;
        rep(i, n)
        {
            cin >> v[i];
            if (v[i] % 2 == 1)
            {
                ind = i + 1;
            }
        }
        bool ok = canPartition(v);
        if (ok)
        {
            cout << 1 << endl;
            pair<int, int> mn(20, 0);
            for (int i = 0; i < n; i++)
                mn = min(mn, make_pair(__builtin_ctz(v[i]), i + 1));
            print(mn.second);
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
