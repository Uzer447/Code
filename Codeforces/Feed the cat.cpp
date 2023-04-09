#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int h, m;
    cin >> h >> m;
    int tm = abs(20 - h);
    tm *= 60;
    tm-=m;
    //cout<<tm<<endl;
    double curr, inc, pr, dec;
    cin >> curr >> inc >> pr >> dec;
    if(h>=20) 
    cout<<fixed<<setprecision(4)<<pr*4/5*ceil(curr/dec);
    else
    {double ans1 = ceil(curr/ dec);
    //cout<<ans1<<endl;
    ans1*=pr;
    double ans2 = 0;
    curr += (tm * inc);
    ans2 = ceil(curr/ dec);
    //cout<<ans2<<endl;
    ans2*=(0.8*pr);
    //ans2 -= (ans2 * 0.2);
    cout <<fixed<< setprecision(4) << min(ans1, ans2) << endl;}

    return 0;
}
