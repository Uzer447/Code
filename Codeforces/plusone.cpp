#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int maxn=INT_MIN,minn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            maxn=max(a,maxn);
            minn=min(a,minn);
        }
        cout<<maxn-minn<<endl;
    }
    return 0;
}