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
        int count = 0;
        int index = s.find('1');
        if (index == -1)
            cout << 0 << endl;
        else
        {
            while (index != -1)
            {
                
                for (int i = 0; i < s.size() - 1; i++)
                {
                    if (s[i] == '1' && s[i + 1] == '0')
                        index = i;
                }
                cout << index << endl;
                
                for (int i = index + 1; i < s.size(); i++)
                {
                    if (s[i] == '0')
                        count++;
                    if (s[i] == '1')
                        break;
                }
                cout << count << endl;
            }

            return 0;
        }