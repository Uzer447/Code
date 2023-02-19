#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    int up = 0;
    int lo = 0;
    int n = s.size();
    bool change = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            up++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            lo++;
    }
    if (up == n - 1)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            change = true;
        }
    }
    if (up == n)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    if (change && up == n - 1)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = s[0] - 32;
    }
    cout << s << endl;

    return 0;
}