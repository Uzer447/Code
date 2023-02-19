#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    forn(n)
    {
        mp[s[i]]++;
    }
    int diff = abs(mp['L'] - mp['R']) + abs(mp['U'] - mp['D']);
    cout << n - diff << endl;
    return 0;
}