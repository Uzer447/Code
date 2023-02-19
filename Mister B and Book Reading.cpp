#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int c, v0, v1, a, l;
    cin >> c >> v0 >> v1 >> a >> l;
    int curr = v0;
    c -= v0;
    int d = 1;
    while (c > 0)
    {
        curr += a;
        if (curr > v1)
            curr = v1;
        c -= (curr - l);
        d++;
    }
    cout << d << endl;

    return 0;
}