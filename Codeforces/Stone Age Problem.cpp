#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int i,x;
            cin>>i>>x;
            sum-=v[i-1];
            sum+=x;
            v[i]=x;
        }
        else
        {
            int x;
            cin>>x;
            forn(n)
            {
                v[i]=x;
            }
            sum=n*x;
        }
        cout<<sum<<endl;
    }
    

    return 0;
}
