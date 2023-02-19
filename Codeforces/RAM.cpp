#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int,int> mp;
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);

        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[v[i]]=a;
           
        }
        
        sort(v.begin(),v.end());
         
        for(int i=0;i<n;i++)
        {
            if(v[i]<=k)
            {
                k+=mp[v[i]];
                cout<<k<<endl;
            }
            else
            break;
        }
        cout<<k<<endl;


    }
    return 0;
}