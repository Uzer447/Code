#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
        ll n;
        cin>>n;
        vector<int> meat;
        vector<int> price;
        for(int i=0; i<n; i++)
        {
            int a,p;
            cin>>a>>p;
            meat.push_back(a);
            price.push_back(p);
        }
        for(int i=1; i<n; i++)
        {
            price[i]=min(price[i-1],price[i]);
        }
        cout<<endl;
        ll cost=0;
        for(int i=0;i<n;i++)
        {
            cost+=(price[i]*meat[i]);
        }
        cout<<cost<<endl;
    return 0;
}