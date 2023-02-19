#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (m < n)
        cout << "NO" << endl;
    else if (k < n)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}