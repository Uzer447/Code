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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> ans(n);
        ans[n-1]=v[n-1];

        for(int i=n-2;i>=0;i--)
        {
            if(v[i]<ans[i+1])
            {
                ans[i]=v[i];
            }
            else
            {
                ans[i]=ans[i+1];
            }
        }
        int cnt=0;
        forn(n)
        {
            if(v[i]>ans[i])
            cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
