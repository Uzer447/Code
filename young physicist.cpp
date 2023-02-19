#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sumx=0;
    int sumy=0;
    int sumz=0;
    while(n--)
    {
        int a,y,z;
        cin>>a>>y>>z;
        sumx+=a;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}