#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int moves=abs(d-b);
        a+=moves;
        moves+=abs(c-a);
        if(d<b || c>a)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<moves<<endl;
        }

    }

    return 0;
}
