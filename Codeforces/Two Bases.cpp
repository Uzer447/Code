#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, bx;
    cin >> n >> bx;
    ll s1=0;
    while(n--)
    {
        ll d;
        cin>>d;
        s1*=bx;
        s1+=d;
    }
    int m, by;
    cin >> m >> by;
    ll s2=0;
    while(m--)
    {
        ll d;
        cin>>d;
        s2*=by;
        s2+=d;
    }
    if (s1 > s2)
        cout << ">" << endl;
    else if (s1 < s2)
        cout << "<" << endl;
    else
        cout << "=" << endl;
    return 0;
}
