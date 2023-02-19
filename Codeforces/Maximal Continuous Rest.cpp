#include <bits/stdc++.h>
using namespace std;
int main()
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
    v.push_back(v[0]);
    n++;
    int currans = 0;
    int maxans = INT_MIN;
    int ind = find(v.begin(), v.end(), 1) - v.begin();

    for (int i = ind; i < n; i++)
    {
        if (v[i] == 0)
        {
            maxans = max(maxans, currans);
            currans = 0;
        }
        else
            currans++;
    }
    maxans=max(maxans, currans);
    if (ind == n)
        cout << 0 << endl;
    else
        cout << maxans << endl;
    return 0;
}