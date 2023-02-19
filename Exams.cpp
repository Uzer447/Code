#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int tem = n * 2;
    int x = k - tem;
    if (x > n)
        cout << 0 << endl;
    else
        cout << n - x << endl;
    return 0;
}