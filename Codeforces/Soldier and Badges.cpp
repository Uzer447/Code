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
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    int cost=0;
    for(auto it:mp)
    {
        if(it.second>1)
        {
            cost+=(it.second-1);
        }
    }
    // sort(v.begin(), v.end());
    // int cost=0;
    // int ele=v[0];
    // for(int i = 0; i < n; i++)
    // {
    //     //cout<<ele<<endl;
    //     if(v[i]!=ele)
    //     {
    //         cost+=abs(ele-v[i]);
            
    //     }
    //     ele++;
    // }
    cout<<cost<<endl;
    return 0;
}
