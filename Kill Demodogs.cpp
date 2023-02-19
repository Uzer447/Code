#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    ll MAXN   = 1000000007;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum =((((n*(n+1))%MAXN)*(4*n-1))%MAXN*337)%MAXN;
        cout<<sum<<endl;
    }
    return 0;
}
// IDEA====>>>
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     ll MAXN = 1000000007;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll sum = ((n % MAXN) * ((n + 1) % MAXN) * (((2 * n) + 1) % MAXN) % MAXN)/3;
//         ll k = ((((n + 1) % MAXN) * (n % MAXN)) % MAXN) / 2;
//         ll ans = ((sum % MAXN) - (k % MAXN)) % MAXN;
//         ans = (ans % MAXN * 2022 % MAXN) % MAXN;
//         cout << ans % MAXN << endl;
//     }

//     return 0;
// }