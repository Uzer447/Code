#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int left1=0,left0=0,right1=0,right0=0;
    while(n--)
    {
        int left,right;
        cin>>left>>right;
        if(left==1)
        left1++;
        if(left==0)
        left0++;
        if(right==0)
        right0++;
        if(right==1)
        right1++;
    }
    int ans=min(left1,left0)+min(right1,right0);
    cout<<ans<<endl;
    return 0;
}