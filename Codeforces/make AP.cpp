#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll diffab=b-a;
        ll diffbc=c-a;
        if((abs(diffab-diffbc)+a)%a==0)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}