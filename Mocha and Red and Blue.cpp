#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                if (i - 1 >= 0 && s[i - 1] == '?')
                {
                    s[i - 1] = 'B';
                }
                if (i + 1 < n && s[i + 1] == '?')
                {
                    s[i + 1] = 'B';
                }
            }
            if (s[i] == 'B')
            {
                if (i - 1 >= 0 && s[i - 1] == '?')
                {
                    s[i - 1] = 'R';
                }
                if (i + 1 < n && s[i + 1] == '?')
                {
                    s[i + 1] = 'R';
                }
            }
            else if (i + 1 < n && s[i + 1] == '?')
            {
                if (i - 1 >= 0 && s[i - 1] == 'R')
                {
                    s[i] = 'B';
                }
                else if (i + 1 < n && s[i + 1] == 'R')
                {
                    s[i] = 'B';
                }
                else if (i - 1 >= 0 && s[i - 1] == 'B')
                {
                    s[i] = 'R';
                }
                else if (i + 1 < n && s[i + 1] == 'B')
                {
                    s[i] = 'R';
                }
                else
                {
                    s[i] = 'B';
                }
            }
        }

        cout << s << endl;
    }
    return 0;
}