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
        int x;
        cin>>x;
        int b=0;
        if(x<100)
        {
            b=0;
        }
        else if(x>100 && x<1000)
        {
            b=25;
        }
        else if(x>1000 && x<5000)
        {
            b=100;
        }
        else
        b=500;
        cout<<x+b<<endl;
    }

    return 0;
}
