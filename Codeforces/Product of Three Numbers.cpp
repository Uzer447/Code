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
        int n;
        cin >> n;
        vector<int> divisors;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divisors.push_back(i);
                if (n / i != i)
                {
                    divisors.pb(n / i);
                }
            }
        }
        sort(vall(divisors));
        int a, b, c;
        if (n % 2 == 0)
            a = 2;
        else
        {
            int p = 3;
            for (p = 3; p * p <= n; p += 2)
            {
                if (n % p == 0)
                {
                    break;
                }
            }
            a = p;
        }
        int flag = 0;
        int x = n / a;
        for (b = 1; b < divisors.size(); b++)
        {
            int temp = x / divisors[b];
            if (*lower_bound(vall(divisors), temp) == temp && temp != divisors[b] && temp != a)
            {
                c = temp;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES\n"<< a << " " << divisors[b] << " " << c << endl;
    }

    return 0;
}
