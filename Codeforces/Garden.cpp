#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int an=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(k%a==0)
        {
            an=min(an,k/a);
        }
    }
        cout<<an<<endl;
    return 0;
}