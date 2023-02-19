#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a < 0)
            neg++;
        else
            pos++;
    }
    int k = neg / 2;
    cout << k << endl;
    int temp = neg / 2;
    k--;
    while (k--)
    {
        cout << temp << " ";
    }
    
    return 0;
}
