#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        vector<int> o;
        vector<int> e;
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
            {
                even++;
                e.push_back(i + 1);
            }
            else
            {
                odd++;
                o.push_back(i + 1);
            }
            v.push_back(a);
        }
        if (odd >= 3)
        {
            cout << "YES" << endl;
            for (int i = 0; i < 3; i++)
                cout << o[i] << " ";
            cout << endl;
        }
        else if (odd >= 1 && even >= 2)
        {
            cout << "YES" << endl;
            for (int i = 0; i < 2; i++)
                cout << e[i] << " ";
            cout << o[0] << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
