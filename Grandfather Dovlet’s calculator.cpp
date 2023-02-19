#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    unordered_map<int, int> mp;
    mp[1] = 2;
    mp[0] = 6;
    mp[2] = 5;
    mp[3] = 5;
    mp[4] = 4;
    mp[5] = 5;
    mp[6] = 6;
    mp[7] = 3;
    mp[8] = 7;
    mp[9] = 6;
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            ans += mp[temp % 10];
            temp /= 10;
        }
    }
    cout << ans << endl;
    return 0;
}
