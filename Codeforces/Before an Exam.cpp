#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int d, s;
    cin >> d >> s;
    vector<pair<int, int>> v;
    int minsum = 0;
    int maxsum = 0;
    forn(d)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
        minsum += a;
        maxsum += b;
    }
    if (s >= minsum && s <= maxsum)
    {
        cout << "YES" << endl;
        for (auto i : v)
        {
            
            if (d <= 0)
                break;
            if(s==0)
            {
                cout<<0<<" ";
            }
            else if(s<i.second)
            {
                cout<<s<<" ";
            }
            else
            {
                cout<<i.second<<" ";
            }
            s -= i.second;
            if(s<0)
            s=0;
            d--;
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
