#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int was=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1 && m<=0)
        {
            was++;
        }
        else if(a==1 && m>0)
        {
            m--;
        }
        else if(a==2)
        {
            if(m<=0 && k<=0)
            {
                was++;
            }
        }
        if(a==2 && m+k>0)
        {
            if(k<=0)
            m--;
            else
            k--;
        }
    }
    cout<<was<<endl;


    return 0;
}
