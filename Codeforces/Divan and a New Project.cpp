#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
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
        int n;
        cin>>n;
        priority_queue<pii> pq;
        rep(i,n)
        {
            int x;
            cin>>x;
            pq.push({x,i});
        }
        ll j=1;
        ll temp=0;
        unordered_map<int,int> mp;
        vi ans(n);
        while(!pq.empty())
        {
            pii p=pq.top();
            pq.pop();
            ans[p.second]=j;
            temp+=(p.first*abs(j));
            if(j>0)
            j*=-1;
            else
            {
                j*=-1;
                j++;
            }
        }
        cout<<2*temp<<endl;
        cout<<"0 ";
        for(auto it:ans)
        cout<<it<<" ";
        cout<<endl;
    }

    return 0;
}
