#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int c,d;
        cin>>c>>d;
        if(a==c && b+d==a)
        {
            cout<<"Yes"<<endl;
        }
        else if(a==d && b+c==a)
        {
            cout<<"Yes"<<endl;
        }
        else if(b==c && a+d==b)
        {
            cout<<"Yes"<<endl;
        }
        else if(b==d && a+c==b)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}