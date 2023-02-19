#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string keys;
        if (s[0] == 'R' || s[0] == 'B' || s[0] == 'G')
            cout << "NO" << endl;
        else
        {
            int ans = -2;
            int flag = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'r' || s[i] == 'g' || s[i] == 'b')
                    keys = keys + s[i];
                if (s[i] == 'R')
                    ans = keys.find('r', 0);
                if (s[i] == 'B')
                    ans = keys.find('b', 0);
                if (s[i] == 'G')
                    ans = keys.find('g', 0);

                if (ans == -1)
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << "YES" << endl;
        }
    }
    return 0;
}