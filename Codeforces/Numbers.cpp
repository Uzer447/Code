#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int sumofdigits(int n, int base)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % base;
        n /= base;
    }
    return sum;
}

int main()
{
    int a;
    cin >> a;
    int ans = 0;
    for (int i = 2; i <= a - 1; i++)
    {
        ans += sumofdigits(a, i);
    }
    int g = __gcd(ans, a - 2);
    ans /= g;
    a -= 2;
    a /= g;
    cout << ans << "/" << a << endl;
    return 0;
}
