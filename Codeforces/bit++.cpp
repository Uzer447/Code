#include <bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        loop(2)
        {
            if (s[i] == '+' && s[i + 1] == '+')
            {
                x++;
            }
            else if (s[i] == '-' && s[i + 1] == '-')
            {
                x--;
            }
        }
    }
    cout << x << endl;
    return 0;
}