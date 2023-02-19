#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=n;
    bool dir=true;
    for(int i=0;i<2*n;i++)
    {
        for(int j=0;j<=2*i;j++)
        {
            if(i!=0)
            cout<<j%i<<" ";
        }
        cout<<endl;
    }

    // for(int i=0; i<2*n; i++)
    // {
    //     if(i==n)
    //     {
    //         dir=false;
    //     }
    //     if(dir)
    //     {
    //         for(int x=1;x<=k;x++)
    //     {
    //         cout<<" ";
    //     }
    //     k--;
    //     }
    //     else
    //     {
    //         for(int x=k;x>=k;x--)
    //         cout<<" ";
    //         k--;
    //     }
    //     for(int y=0;y<=i;y++)
    //     {
    //         cout<<y<<" ";
    //     }
    //     for(int z=i;z>=0;z--)
    //     {
    //         cout<<z<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}