#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //unordered_map<int, int> mp;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(i!=v[i-1])
        {
            cout<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<n+1<<endl;
    }
    return 0;
}
