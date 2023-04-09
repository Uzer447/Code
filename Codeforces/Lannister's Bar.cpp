#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int ans = 0;
        vector<int> v = {x, y, z};
        sort(v.begin(), v.end());
        x = v[0];
        y = v[1];
        z = v[2];
        //cout<<x<<" "<<y<<" "<<z<<endl;
        if(x==0 && y==0 && z==0)
        {
            cout<<0<<endl;
        }
        else if(x==0 && y==0)
        {
            cout<<1<<endl;
        }
        else if(x==0 && y==1)
        {
            cout<<2<<endl;
        }
        else if(x==0 && y>=2 && z>=y)
        {
            cout<<3<<endl;
        }
        else if (x >= 4)
        {
            cout << 7 << endl;
        }
        else if (x == 3)
        {
            cout << 6 << endl;
        }
        else if (x == 2 && y == 2 && z == 2)
        {
            cout << 4 << endl;
        }
        else if (x == 2)
        {
            cout << 5 << endl;
        }
        else if (x == 1 && y == 1)
        {
            cout << 3 << endl;
        }
        else if (x == 1)
        {
            cout << 4 << endl;
        }
    }

    return 0;
}
