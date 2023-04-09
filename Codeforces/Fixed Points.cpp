#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    forn(n)
    {
        if (v[i] == i)
            ans++;
    }
    if(ans==n)
    {
        cout<<ans<<endl;
    }
    else
    {
        
    }

    return 0;
}
