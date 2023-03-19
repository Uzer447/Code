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
        int x,y;
        cin>>x>>y;
        vector<int> v;
        for(int i=y;i<=x;i++)
        {
            v.push_back(i);
        }
        if(abs(x-y)>1)
        {
            for(int i=x-1;i>=y+1;i--)
            {
                v.push_back(i);
            }
        }
        cout<<v.size()<<endl;
        forn(v.size())
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
