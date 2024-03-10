#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int currsum=0;
    int maxsum=INT_MIN;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        currsum-=a;
        currsum+=b;
        maxsum=max(currsum,maxsum);

    }
    cout<<maxsum<<endl;
    return 0;
    
}