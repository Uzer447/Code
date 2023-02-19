#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<long long> v;
        long long ans=0;
        cin>>n;
        unordered_map<long long,long long> m;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            m[a]++;
        }
        for(int i=0; i<n; i++)
        {
            cout<<m[v[i]]<<" ";
            if(m[v[i]]>1)
            ans=ans+(m[v[i]]*(m[v[i]]-1))/2;
            m[v[i]]=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}