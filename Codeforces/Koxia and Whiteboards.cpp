#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        priority_queue<int,vector<int>,greater<int>> a;
        rep(i,n)
        {
            int x;
            cin>>x;
            a.push(x);
        }
        vector<int> b;
        rep(i,m)
        {
            int x;
            cin>>x;
            b.pb(x);
        }
        rep(i,m)
        {
            int x=b[i];
            int y=a.top();
            //cout<<y<<endl;
            a.pop();
            a.push(x);
        }
        ll sum=0;
        while(!a.empty())
        {
            //cout<<a.top()<<" ";
            sum+=a.top();
            a.pop();
        }
        cout<<sum<<endl;
    }

    return 0;
}
