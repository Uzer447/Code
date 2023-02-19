#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v;
    forn(n)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int j = n;
    unordered_map<int, int> mp;
    forn(n)
    {
        mp[i + 1] = j;
        j--;
    }
    forn(n)
    {
        cout << mp[v[i]] << " ";
    }
    cout << endl;
    return 0;
}
