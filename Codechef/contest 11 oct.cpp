#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define vall(p) p.begin(), p.end()
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> a(k, 0);
        vector<int> b(k, 0);
        for (int i = 0; i < n; i++)
        {
            int ind = i % k;
            if (s[i] == '0')
            {
                b[ind]++;
            }
            else
                a[ind]++;
        }
        int ans_1 = 0;
        int ans_2 = 0;
        for (int i = 0; i < k; i++)
        {
            if (a[i] & 1)
            {
                ans_1 += 1 + (a[i] + 1) / 2;
            }
            else
            {
                ans_1 += (a[i] / 2);
            }
        }

        for (int i = 0; i < k; i++)
        {
            if (a[i] == 0)
            {
                ans_2 = INT_MAX;
                break;
            }
            else
            {
                ans_2 += (b[i]);
            }
        }
        cout << min(ans_1, ans_2) << endl; //printing the min of ans1 and ans2
    }

    return 0;
}