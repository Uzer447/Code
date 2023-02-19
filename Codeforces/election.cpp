#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int maxn = max(a, max(b, c));
        int A = maxn - a;
        int B = maxn - b;
        int C = maxn - c;
        if (A == 0 && B == 0 && C == 0)
            cout << 1 << " " << 1 << " " << 1 << endl;
        else
        {
            if (A == 0)
                cout << A << " ";
            else
                cout << A + 1 << " ";
            if (B == 0)
                cout << B << " ";
            else
                cout << B + 1 << " ";
            if (C == 0)
                cout << C;
            else
                cout << C + 1;
            cout << endl;
        }
    }
    return 0;
}