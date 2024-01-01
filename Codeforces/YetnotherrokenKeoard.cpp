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
        string ans = "";
        int b = 0;
        int B = 0;
        int n = s.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'b' || s[i] == 'B')
            {
                if(s[i] == 'b')b++;
                else B++;
            }
                else
                {
                    if (b > 0 && s[i] >= 97 && s[i] <= 122)b--;
                    else if (b == 0 && s[i] >= 97 && s[i] <= 122)
                    {
                        ans = ans + s[i];
                    }
                    else if (B > 0 && s[i] >= 65 && s[i] <= 90)B--;
                    else if (B == 0 && s[i] >= 65 && s[i] <= 90)
                    {
                        ans = ans + s[i];
                    }
                }
        }
        reverse(ans.begin(),ans.end());
        cout << ans << endl;
    }
}