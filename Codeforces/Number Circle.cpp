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
    sort(v.begin(), v.end());
    int flag=1;
    forn(n)
    {
        if(v[i]>=(v[(i+1)%n]+v[(n-1+i)%n]))
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
        for(auto it:v)
        cout<<it<<" ";
        cout<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}
