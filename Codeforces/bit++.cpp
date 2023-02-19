#include <bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; i++)
#define endl "\n";
using namespace std;
int main()
{
    int n;
    cin >> n;
    //cout<<n << endl;
    int x = 0;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        //cout << s << endl;
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