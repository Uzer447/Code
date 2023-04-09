#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int N = 1e5;
    string ex = "abcd";
    string ans="";
    N = N / 4;
    while (N--)
    {
        ans = ans + ex;
    }
    int n;
    cin>>n;
    forn(n)
    {
        cout<<ans[i];
    }
    cout<<endl;

    return 0;
}
