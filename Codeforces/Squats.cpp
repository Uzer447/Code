#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int up = 0;
    for (int j = 0; j < n; j++)
    {
        if (s[j] == 'X')
            up++;
    }
    if (up == n / 2)
        cout << 0 << endl;
    else
        cout << abs(up - n / 2) << endl;
    if (up == n / 2)
    {
        cout << s << endl;
    }
    
    else
    {
        if (n / 2 > up)
        {
            int x = n / 2 - up;
            for (int i = 0; i < n; i++)
            {
                if (x > 0 && s[i] == 'x')
                {
                    x--;
                    s[i] = 'X';
                }
            }
            cout << s << endl;
        }
        else
        {
            int x = up - n / 2;
            for (int i = 0; i < n; i++)
            {
                if (x > 0 && s[i] == 'X')
                {
                    x--;
                    s[i] = 'x';
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}