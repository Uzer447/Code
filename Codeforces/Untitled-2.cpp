#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
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
        cin>>n;
        vector<int> v(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
        cin>>v[i];
        mp[v[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second==1)
            {
                forn(n)
                {
                    if(it.first==v[i])
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
