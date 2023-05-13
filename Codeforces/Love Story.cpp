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
        string s;
        cin>>s;
        int n=10;
        string a="codeforces";
        int cnt=0;
        forn(n)
        {
            if(s[i]!=a[i])
            cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
