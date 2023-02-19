#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll cnt1=0,cnt0=0;
        for(auto i:s)
        {
            if(i=='1')
            cnt1++;
            else
            cnt0++;
        }
        if(min(cnt0,cnt1)%2==1)
        cout<<"DA"<<endl;
        else
        cout<<"NET"<<endl;
    }

    return 0;
}