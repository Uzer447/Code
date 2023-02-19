#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l,r;
        cin>>l>>r;
        l--;
        ll leftsum=0;
        ll rightsum=0;
        if(l%2==0)
        {
            leftsum=l/2;
        }
        else
        {
            leftsum=(l/2)-l;
        }
        if(r%2==0)
        {
            rightsum=r/2;
        }
        else
        {
            rightsum=(r/2)-r;
        }
        cout<<rightsum-leftsum<<endl;
    }

    return 0;
}