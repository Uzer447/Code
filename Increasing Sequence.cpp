#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] <= v[i])
        {
            int diff = v[i] - v[i + 1];
            cnt += diff / d;
            cnt++;
            v[i + 1] = v[i + 1] + d * ((diff / d) + 1);
        }
    }
    cout << cnt << endl;
    return 0;
}