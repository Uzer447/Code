#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<pair<int,int>,int> mp;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        mp[{a,b}]++;
    }
    int maxele=INT_MIN;
    for(auto i:mp)
    {
        maxele=max(maxele,i.second);
    }
    cout<<maxele <<endl;
    return 0;
}