#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
bool sumis10(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum == 10)
    {
        return true;
    }
    return false;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    vector<int> ans(10001);
    int j = 19;
    int i = 1;
    while (i < 10001)
    {
        if (sumis10(j))
        {
            ans[i] = j;
            i++;
            j += 9;
        }
        else
        {
            j += 9;
        }
    }
    int k;
    cin >> k;
    cout << ans[k] << endl;
    return 0;
}
