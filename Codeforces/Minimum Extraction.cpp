#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
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
        priority_queue<int,vector<int>,greater<int>> pq;
        rep(i,n)
        {
            int x;
            cin>>x;
            pq.push(x);
        }
        int curr=0;
        int ans=INT_MIN;
        while(pq.size()>1)
        {
            int temp=pq.top();
            pq.pop();
            ans=max(ans,temp-curr);
            curr=curr+(temp-curr);
        }
        ans=max(ans,pq.top()-curr);
        cout<<ans<<endl;
    }

    return 0;
}
