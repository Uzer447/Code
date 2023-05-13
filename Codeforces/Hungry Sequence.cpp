#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
vector<bool> isprime(100000, 1);
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i = 2; i < 10000001; i++)
    {
        if (n == 0)
            break;
        if (isPrime(i) == 1)
        {
            cout << i << " ";
            n--;
        }
    }
    cout << endl;
    return 0;
}
