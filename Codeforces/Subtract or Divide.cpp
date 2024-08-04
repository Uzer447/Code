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
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
            cout << 0 << endl;
        else if (n == 3)
            cout << 2 << endl;
        // else if (isPrime(n))
        // {
        //     int ans = 1;
        //     n--;
        //     for (int i = 2; i * i <= n; i++)
        //     {
        //         if (n % i == 0)
        //         {
        //             n /= (n / i);
        //             ans++;
        //             break;
        //         }
        //     }
        //     cout << ans + (n - 1) << endl;
        // }
        else
        {
            int ans = 0;
            while (n > 2)
            {
                if (n % 2 == 1)
                {
                    ans++;
                    n--;
                }
                else
                {
                    // for (int i = 2; i * i <= n; i++)
                    // {
                    //     if (n % i == 0)
                    //     {
                    //         n /= (n / i);
                    //         ans++;
                    //         break;
                    //     }
                    // }
                    n /= (n / 2);
                    ans++;
                }
            }
            cout << ans + 1 << endl;
        }
    }

    return 0;
}
