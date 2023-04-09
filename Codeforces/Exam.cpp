#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    if(n<=2)
    {
        cout<<1<<endl;
        cout<<n<<endl;
    }
    else if(n<4)
    {
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else if(n==4)
    {
        cout<<4<<endl;
        cout<<"3 1 4 2"<<endl;
    }
    else
    {
        cout<<n<<endl;
        int i=1;
        while(i<=n)
        {
            cout<<i<<" ";
            i+=2;
        }
        i=2;
        while(i<=n)
        {
            cout<<i<<" ";
            i+=2;
        }
        cout<<endl;
    }

    return 0;
}
