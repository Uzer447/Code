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
        int n;
        cin >> n;
        vector<int> v;
        int pos = 0;
        int neg = 0;
        forn(n)
        {
            int a;
            cin >> a;
            if (a > 0)
                pos++;
            else
                neg++;
            v.push_back(a);
        }
        vector<int> maxarr;
        vector<int> minarr;
        int i = 1;
        while (i <= pos)
        {
            maxarr.push_back(i);
            i++;
        }
        int temp = neg;
        i--;
        while (temp--)
        {
            i--;
            maxarr.push_back(max(i, 0));
        }
        for (int j = 1; j <= min(neg, pos); j++)
        {
            minarr.push_back(1);
            minarr.push_back(0);
        }
        if (neg > pos)
        {
            for (int j = 1; j <= neg - min(neg, pos); j++)
            {
                minarr.push_back(0);
            }
        }
        else
        {
            for (int j = 1; j <= pos - min(pos, neg); j++)
            {
                minarr.push_back(j);
            }
        }

        for (auto k : maxarr)
        {
            cout << k << " ";
        }
        cout << endl;
        for (auto k : minarr)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}