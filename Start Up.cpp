#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char it = s[i];
        if (it != 'A' && it != 'H' && it != 'I' && it != 'M' && it != 'O' && it != 'T' && it != 'U' && it != 'V' && it != 'W' && it != 'X' && it != 'Y')
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    int l = 0;
    int r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            cout << "NO" << endl;
            return 0;
        }
        l++;
        r--;
    }
    cout << "YES" << endl;
    return 0;
}
