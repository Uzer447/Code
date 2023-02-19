#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool islucky(int n)
{
    while (n > 0)
    {
        int d = n % 10;
        n /= 10;
        if (d != 4 && d != 7)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (islucky(i))
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}