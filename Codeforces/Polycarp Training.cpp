#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=ans)
        {
            ans++;
        }
    }
    cout<<ans-1<<endl;
    return 0;
}