#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll steps=0;
        while(n>0)
        {
            
            if(n%k==0)
            {
                n/=k;
                steps++;
            }
            else
            {
                steps+=n%k;
                n=n-n%k;
            }
        }
        cout<<steps<<endl;
    }

    return 0;
}