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
    vector<int> v(n/2);
    for (int i = 0; i < n/2; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans1=0;
    int ans2=0;
    forn(n/2)
    {
        ans1+=abs(v[i]-(2*i+1));
        ans2+=abs(v[i]-(2*i+2));
    }
    cout<<min(ans1,ans2)<<endl;
    return 0;
}
