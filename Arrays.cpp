#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int na, nb;
    cin >> na >> nb;
    int k, m;
    cin >> k >> m;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < na; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < nb; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    int aele = a[k - 1];
    int bele = b[nb - m];
    if (aele < bele)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}