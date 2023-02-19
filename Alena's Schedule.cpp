#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1 && ind == -1)
            ind = i;
        v.push_back(a);
    }
    int cnt = 0;
    for (int i = ind; i < n; i++)
    {
        if (v[i] == 1)
            cnt++;
        else if (i + 1 < n && v[i] == 0 && v[i + 1] == 1)
        {
            cnt++;
            // i++;
        }
        else if (i + 1 < n && v[i] == 0 && v[i + 1] == 0)
        {
            while (v[i + 1] != 1 && i < n)
                i++;
        }
    }
    cout << cnt << endl;
    return 0;
}