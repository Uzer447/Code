#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        if(n<6)
        {
            cout<<15<<endl;
        }
        else
        {
            if(n%2==1)
            n++;
            cout<<(n*5)/2<<endl;
        }
    }

    return 0;
}