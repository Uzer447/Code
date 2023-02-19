#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() == 1 && s[0] == '.')
        cout << 0;
    else
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '-' && s[i + 1] == '.')
            {
                cout << 1;
                i++;
            }
            else if (s[i] == '-' && s[i + 1] == '-')
            {
                cout << 2;
                i++;
            }
            else
                cout << 0;
            if (i + 1 == s.size() - 1 && s[i + 1] == '.')
                cout << 0;
        }
    }
    // cout << endl;
    return 0;
}