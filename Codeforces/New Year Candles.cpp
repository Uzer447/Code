#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    int cnt = a;
    while (a > 0)
    {
        int t=ceil(a/b);
        cnt=cnt+t;
        a /= b;
    }
    cout << cnt << endl;
    return 0;
}