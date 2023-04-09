#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a,b,c;
    cin>>a>>b>>c;
    int avg=(a+b+c)/3;
    cout<<abs(a-avg)+abs(b-avg)+abs(c-avg)<<endl;

    return 0;
}
