#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    if (n % 2 == 1)
        cout << 0 << endl;
    else
    {
        if (n % 4 == 0)
            cout << (n / 4) - 1 << endl;
        else
            cout << (n / 4) << endl;
    }

    return 0;
}