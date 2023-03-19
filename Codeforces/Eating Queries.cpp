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
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        vector<int> prs(n,0);
        prs[0]=v[0];
        for(int i=1;i<n;i++)
        {
            prs[i]=prs[i-1]+v[i];
        }
        while(q--)
        {
            int x;
            cin>>x;
            auto it=lower_bound(prs.begin(),prs.end(),x)-prs.begin();
            if(it==n)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<it+1<<endl;
            }
        }
    }

    return 0;
}
