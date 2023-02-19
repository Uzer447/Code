#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p,q;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>p>>q;
        if(p<q && (q-p)>=2 && p+2<=q)
        {
            count++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}