#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int> ans(n,0);
    for(int i=0;i<m;i++)
    {
        for(int j=v[i]-1;j<n;j++)
        {
            if(ans[j]!=0)
            {
                break;
            }
            ans[j]=v[i];
        }
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }

    return 0;
}