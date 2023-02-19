#include <bits/stdc++.h>
#define ll long long
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
        if (n == 1)
            cout << 0 << endl;
        else
        {
            int inv = 0;
            int ind = s.find('1');
            if (ind == string::npos)
                cout << 0 << endl;
            else
            {
                for (int i = ind; i < n - 1; i++)
                {
                    if (s[i] == '0' && s[i + 1] == '1')
                        inv++;
                    else if (s[i] == '1' && s[i + 1] == '0')
                        inv++;
                }
                cout << inv << endl;
            }
        }
    }

    return 0;
}