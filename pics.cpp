#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char x;
            cin>>x;
            if(x=='C' || x=='M' || x=='Y')
            {
                flag=1;
                cout<<"#Color"<<endl;
                break;
            }
        }
        if(flag==1)
        break;

    }
    if(flag==0)
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}