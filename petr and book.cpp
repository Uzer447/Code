#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(7,0);
    for(int i=0;i<7;i++)
    {
        cin>>v[i];
    }
    
    int i=0;
    while(true)
    {
        if(i==7)
        i=0;
        if(v[i]!=0)
        n-=v[i] ;
        //cout<<n<<" ";
        i++;
        if(n<=0)
        break;
    }
    cout<<i<<endl;
    
    return 0;
}