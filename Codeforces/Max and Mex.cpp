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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        unordered_map<int,int> mp;
        int a=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            a=max(a,v[i]);
            mp[v[i]]=1;
        }
        int b=-1;
        for(int i=0;i<=a+1;i++)
        {
            if(mp[i]==0)
            {
                b=i;
                break;
            }
        }
        //cout<<a<<" "<<b<<endl;
        if(k==0)
        cout<<n<<endl;
        else if(b>a)
        {
            cout<<n+k<<endl;
        }
        else if(b<a)
        {
            int x=(a+b)/2;
            if(mp[x]==1)
            cout<<n<<endl;
            else
            cout<<n+1<<endl;
        }
    }

    return 0;
}
