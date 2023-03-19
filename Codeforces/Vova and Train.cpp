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
        int d,v,l,r;
        cin>>d>>v>>l>>r;
        int ans=d/v;
        int diff=(r/v)-((l-1)/v);
        int ex=diff;
        cout<<ans-ex<<endl;
    }

    return 0;
}
