#include <bits/stdc++.h>
using namespace std;
int absorption(int h)
{
    h=h/2;
    return h+10;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        int prev=0;
        int cnt=0;
        while(n--)
        {
            int temp=absorption(x);
            cout<<x<<endl;
            if(x<=0 || temp>=prev)
            break;
            x=temp;
            prev=x;
            
        }
        cout<<x<<endl;
        if(x>0)
        {
            x=x-m*10;
        }
        if(x<=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}