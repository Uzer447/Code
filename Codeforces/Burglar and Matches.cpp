#include <bits/stdc++.h>
#define ll long long 
using namespace std;
bool operator(pair<int,int> a,pair<int,int> b)
{
    if(a.first>b.first)
    {
        return true;
    }
    else if(a.first<b.first)
    return false;
    else
    {
        if(a.second>b.second)
        return false;
        else if(b.second<a.second)
        return true;
        else return true;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    ll matches=0;
    vector<pair<int,int>> v;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a*b,a});
    }
    sort(v.begin(),v.end(),operator<pair<int,int>>());
    for(int i=v.size()-1; i>=0;i--)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
        cout<<n<<endl;
        int sub=min(n,v[i].second);
        n-=sub;
        matches+=(v[i].first/v[i].second)*sub;
        if(n<=0)
        break;
    }
    cout<<matches<<endl;
    return 0;
}