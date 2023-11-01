#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n==3)
        {
            cout<<"1 3 5"<<endl;
        }
        else
        {for(int i=1;i<=n+2;i++)
        {
            if(i==2 || i==4)continue;
            cout<<i<<" ";
        }
        cout<<endl;
        }
    }

    return 0;
}
