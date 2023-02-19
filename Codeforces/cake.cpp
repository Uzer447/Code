#include<bits/stdc++.h>
using namespace std;


bool cake(int x,int y,int n,int m,int k)
{
    if(k==0 && x==n && y==m)
    return true;
    if(k<=0 && x!=n && y!=m)
    return false;
    bool ans=cake(x+1,y,n,m,k-y);
    if(ans)
    return true;
    else
     ans=cake(x,y+1,n,m,k-x);
     return ans;
    
   
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    if(cake(1,1,n,m,k))
    cout<<"Yes\n";
    else
    cout<<"No\n";
    return 0;

}
