#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int m;
    cin>>m;
    vector<int> b;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }
    double maxratio=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            double k=b[j]/a[i];
            if(k>maxratio)
            {
                maxratio=k;
            }
            //maxratio=max(maxratio,b[j]/a[i]);
        }
    }
    int ans=0;
    cout<<maxratio<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            if(maxratio==b[j]/a[i])
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}