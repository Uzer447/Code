#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int x=a^b;
        if(n%3==0)
        cout<<a<<endl;
        else if(n%3==1)
        cout<<b<<endl;
        else if(n%3==2)
        cout<<x<<endl;
        // vector<int> v(n,0);
        // cout<<a<<" "<<b<<" ";
        // v[0]=a;
        // v[1]=b;
        // for(int i=2;i<=n;i++)
        // {
        //     v[i]=v[i-2]^v[i-1];
        //     cout<<v[i]<<" ";
        // }
    }

    return 0;
}