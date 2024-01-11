#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    vector<int> v;
    forn(n)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    int d = v[1] - v[0];
    bool ap = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] == d)
            ap = true;
        else
        {
            ap = false;
            break;
        }
    }
    if (ap)
    {
        cout << v[n - 1] + d << endl;
    }
    else
    {
        cout << v[n - 1] << endl;
    }
    return 0;
}
