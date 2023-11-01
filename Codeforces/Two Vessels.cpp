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
        int a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        while(a!=b)
        {
            cnt++;
            if(a>b)
            {
                a-=c;
                b+=c;
            }
            else
            {
                b-=c;
                a+=c;
            }
        }
        cout<<cnt<<endl;    
    }

    return 0;
}
