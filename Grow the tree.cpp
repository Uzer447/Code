#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int indy=n/2;
    int indx=n-(n/2);
    ll x=0;
    ll y=0;
    for(int i=0;i<indy;i++)
    {
        y+=v[i];
    }
    int i=n-1;
    while(indx--)
    {
        x+=v[i];
        i--;
    }
    cout<<x*x+y*y<<endl;

    return 0;
}
