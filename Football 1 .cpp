#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        mp[a]++;
    }
    int maxans=INT_MIN;
    for(auto i:mp)
    {
        maxans=max(maxans,i.second);
    }
    for(auto i:mp)
    {
        if(i.second==maxans)
        {
            cout<<i.first<<endl;
            break;
        }
    }

    
    return 0;
}