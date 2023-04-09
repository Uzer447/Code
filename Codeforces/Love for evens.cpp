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
    int cnt=0;
    while (t--)
    {
        ll a;
        cin>>a;
        if(a%2==0)
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
