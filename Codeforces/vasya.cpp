#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int minn=min(a,b);
    cout<<minn<<" ";
    a-=minn;
    b-=minn;
    int maxn=max(a,b);
    cout<<maxn/2<<endl;
    return 0;
}