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
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] - a[i] > 1 || a[i]>b[i])
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
    }

    return 0;
}