#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll sum=0;
    ll ans=0;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int fl=0;
    for(int i=0; i<n; i++)
    {
        
        if(sum*10>=45*n)
        {
            fl=1;
            cout<<ans<<endl;
            break;
        }
        if(v[i]<5)
        {
            sum+=(5-v[i]);
            ans++;
        }
        // else
        // ans++;
    }
    if(fl==0)
    cout<<ans<<endl;
    return 0;
}