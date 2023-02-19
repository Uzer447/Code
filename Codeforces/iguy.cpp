#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);

    }
    int maxp=v[0];
    int minp=v[0];
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]>maxp)
        ans++;
        else if(v[i]<minp)
        ans++;
        maxp=max(maxp,v[i]);
        minp=min(minp,v[i]);
        
    }
    cout<<ans<<endl;
    return 0;

}