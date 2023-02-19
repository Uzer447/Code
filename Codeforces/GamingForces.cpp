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
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end(), greater<int>());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && v[i] == 1 && v[i + 1] == 1)
            {
                cnt++;
                v[i] = 0;
                v[i + 1] = 0;
                i++;
            }
            else
            {
                cnt++;
                v[i] = 0;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}