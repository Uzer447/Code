#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
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
        map<int, int> mp;
        map<int, int> ind;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            mp[a]++;
            ind[a] = i + 1;
        }

        // for(auto it:v)
        // cout<<it.first<<" "<<it.second<<endl;

        for (auto it : mp)
        {
            if (it.second == 1)
            {
                cout << ind[it.first] << endl;
                break;
            }
        }
    }

    return 0;
}