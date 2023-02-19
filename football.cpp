#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int curr0 = 0, curr1 = 0;
    int max1 = INT_MIN;
    int max0 = INT_MIN;
    for (char c : s)
    {
        if (c == '1')
        {
            curr1++;
            max0 = max(curr0, max0);
            curr0 = 0;
        }
        
        if (c == '0')
        {
            curr0++;
            max1 = max(curr1, max1);
            curr1 = 0;
        }
       
    }
    max1 = max(curr1, max1);
    max0 = max(curr0, max0);
    if (max1 >= 7 || max0 >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}