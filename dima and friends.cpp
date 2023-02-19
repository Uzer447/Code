#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    n++;
    int i=1;
    while(true)
    {
        if(i-sum >0)
        {
            cout<<i-sum+1<<endl;
            break;
        }
        i+=n;
    }
    return 0;
}
