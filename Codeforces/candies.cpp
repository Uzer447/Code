#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll k=0;
        for(int i=2;i<30;i++)
        {
            k=pow(2,i)-1;
            if(n%k==0)
            {
                cout<<n/k<<endl;
                break;
            }
        }
    }
    return 0;


}