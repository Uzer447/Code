#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] != '.')
        {
            if (s[i] == 'A')
            {
                if (s[i + 1] == 'B' && s[i - 1] == 'C')
                {
                    flag = 1;
                    break;
                }
                else if (s[i + 1] == 'C' && s[i - 1] == 'B')
                {
                    flag = 1;
                    break;
                }
            }
            if (s[i] == 'B')
            {
                if (s[i + 1] == 'A' && s[i - 1] == 'C')
                {
                    flag = 1;
                    break;
                }
                else if (s[i + 1] == 'C' && s[i - 1] == 'A')
                {
                    flag = 1;
                    break;
                }
            }
            if (s[i] == 'C')
            {
                if (s[i + 1] == 'B' && s[i - 1] == 'A')
                {
                    flag = 1;
                    break;
                }
                else if (s[i + 1] == 'A' && s[i - 1] == 'B')
                {
                    flag = 1;
                    break;
                }
            }
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    return 0;
}