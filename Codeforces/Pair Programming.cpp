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
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        vector<int> v;
        int left = 0;
        int right = 0;
        int flag = 1;
        while (left != n || right != m)
        {
            if (left != n && a[left] == 0)
            {
                v.push_back(a[left]);
                left++;
                k++;
            }
            else if (right != m && b[right] == 0)
            {
                v.push_back(b[right]);
                right++;
                k++;
            }
            else if (left != n && a[left] <= k)
            {
                v.push_back(a[left]);
                left++;
            }
            else if (right != m && b[right] <= k)
            {
                v.push_back(b[right]);
                right++;
            }
            else
            {
                cout << -1 << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        
    }

    return 0;
}
