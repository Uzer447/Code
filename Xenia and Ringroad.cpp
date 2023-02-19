#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int curr = 1;
    int i = 0;
    int steps = 0;
    while (i < m)
    {
        if (curr == v[i])
        {
            i++;
        }
        else
        {
            curr++;
            if (curr == n + 1)
                curr = 1;
            steps++;
        }
    }
    cout << steps << endl;
    return 0;
}