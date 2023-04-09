#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    //int half = 0;
    int ans = 0;
    forn(n)
    {
        ans+=v[i]/k;
        if(v[i]%k!=0)
        ans++;
    }
    //cout<<ans<<endl;
    if(ans%2==1)
    ans++;
    ans/=2;
    //ans += half / 2;
    cout << ans << endl;

    return 0;
}
