#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int days=0;
    int sum=0;
    while(n--)
    {
        int a;
        cin>>a;
        sum+=a;
        int t=min(8,sum);
        sum-=t;
        k-=t;
        days++;
        if(k<=0)
        break;
    }
    if(k>0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<days<<endl;
    }
    return 0;
}