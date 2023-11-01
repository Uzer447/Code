#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

// function to find sum of prime
// divisors of N
int SumOfPrimeDivisors(int n)
{
    int sum = 0;
    // return type of sqrt function
    // if float
    int root_n = (int)sqrt(n);
    for (int i = 1; i <= root_n; i++)
    {
        if (n % i == 0)
        {
            // both factors are same
            if (i == n / i && isPrime(i))
            {
                sum += i;
            }
            else
            {
                // both factors are
                // not same ( i and n/i )
                if (isPrime(i))
                {
                    sum += i;
                }
                if (isPrime(n / i))
                {
                    sum += (n / i);
                }
            }
        }
    }
    return sum;
}
// Driver code
int main()
{
    int t;
    while(t--)
    {
        int n;
        cin >> n;
        int sum = SumOfPrimeDivisors(n);
        if (__builtin_popcount(n) == 1)
            cout << "Bob" << endl;
        else
        {
            if ((sum / 3) % 2 == 1)
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
        }
    }
}
// This code is contributed by hemantraj712
