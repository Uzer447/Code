#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n,f;
    cin>>n>>f;
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        mp[a]=b;
    }
    int time=0;
    int curr=0;
    for(auto it:mp)
    {
        if(it.second-curr>0)
        {
            time+=it.second-curr;
            time+=f-it.first;
            f=it.first;
            curr=time;
            cout<<f<<" "<<curr<<endl;
        }
        else
        {
            time+=f-it.first;
            f=it.first;
            curr=time;
        }
    }
    cout<<time<<endl;
    return 0;
}
