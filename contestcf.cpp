#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = (3 * a) / 10;
    int y = a - (a * c) / 250;
    int maxm = max(x, y);
    x = (3 * b) / 10;
    y = b - (b * d) / 250;
    int maxv = max(x, y);
    if (maxm > maxv)
        cout << "Misha" << endl;
    else if (maxm < maxv)
        cout << "Vasya" << endl;
    else
        cout << "Tie" << endl;
    return 0;
}