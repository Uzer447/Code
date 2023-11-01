#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
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
        cin>>n;
        priority_queue<int> a;
        priority_queue<int> b;
        forn(n)
        {
            int x;
            cin>>x;
            a.push(x);
        }
        forn(n)
        {
            int x;
            cin>>x;
            b.push(x);
        }
        int ans=0;
        while(!a.empty())
        {
            int x=a.top();
            int y=b.top();
            if(x==y)
            {
                a.pop();
                b.pop();
            }
            else if(x>y)
            {
                a.pop();
                a.push(to_string(x).size());
                ans++;
            }
            else if(y>x)
            {
                b.pop();
                b.push(to_string(y).size());
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
