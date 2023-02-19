#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, x, b;
    cin >> n >> x >> b;
    cout << n - max(x + 1, n - b) + 1<<endl;
    return 0;
}