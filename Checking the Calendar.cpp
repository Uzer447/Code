#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    vector<string> days = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    unordered_map<string, int> mp;
    for (int i = 0; i < days.size(); i++)
    {
        mp[days[i]] = i;
    }
    string a;
    string b;
    cin >> a >> b;
    if (a == b)
        cout << "YES" << endl;
    else if (b == days[(mp[a] + 3) % 7])
        cout << "YES" << endl;
    else if (b == days[(mp[a] + 2) % 7])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
