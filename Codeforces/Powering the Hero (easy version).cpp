#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
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
        vi s(n);
        rep(i, n) cin >> s[i];
        priority_queue<int> pq;
        ll ans=0;
        rep(i,n)
        {
            if(s[i]==0 && !pq.empty())
            {
                ans+=pq.top();
                pq.pop();
            }
            else
            pq.push(s[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}
