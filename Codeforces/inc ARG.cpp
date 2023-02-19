#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
            cnt++;
        if (s[i] == '1' && s[i + 1] == '0')
            cnt++;
        if (s[i] == '0' && s[i + 1] == '0')
            break;
        if (s[i] == '0' && s[i + 1] == '1')
            break;
    }
    cout << cnt + 1 << endl;

    return 0;
}