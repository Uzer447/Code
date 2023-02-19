#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    int minele=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        minele=min(minele,a);
        v.push_back(a);
    }
    
    ll ans=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if((v[i]-minele)%k!=0)
        {
            flag=1;
            cout<<-1<<endl;
            break;
        }
        ans+=(v[i]-minele)/k;
    }
    if(flag==0)
    cout<<ans<<endl;
    
    return 0;
}