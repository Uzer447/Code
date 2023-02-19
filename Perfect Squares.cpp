#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    int maxans=INT_MIN;
    while (t--)
    {
        int a;
        cin>>a;
        // if(a<0)
        // a*=-1;
        int s=sqrt(a);
        if(s*s!=a || a<0)
        maxans=max(maxans,a);
    }
    cout<<maxans<<endl;
    return 0;
}