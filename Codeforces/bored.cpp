#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n)
{
    return (n == 1) ? 1 : n * factorial(n - 1);
}
int main()
{
    long long a, b;
    cin >> a >> b;
    long long minn=min(a,b);
    minn = factorial(minn);
    
    //b = factorial(b);
    //long long ans = __gcd(a, b);
    cout << minn << "\n";
    return 0;
}