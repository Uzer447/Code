#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    cin>>s;
    int n=s.size();
    if(n%2==1)
    cout<<-1<<endl;
    else
    {
        int x=0;
        int y=0;
        forn(n)
        {
            if(s[i]=='R')
            x++;
            if(s[i]=='L')
            x--;
            if(s[i]=='U')
            y++;
            if(s[i]=='D')
            y--;
        }
        cout<<(abs(x)+abs(y))/2<<endl;
    }


    return 0;
}
