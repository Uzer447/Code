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
    int n, k;
    cin >> n >> k;
    vi v(n);
    vector<pii> freq;
    rep(i, n)
    {
        cin >> v[i];
    }
    vi temp(k + 1, 0);
    rep(i, n)
    {
        temp[v[i]]++;
    }
    rep(i, k)
    {
        freq.push_back({i + 1, temp[i + 1]});
    }
    sort(vall(freq), greater<pii>());
    // for(auto it:freq)
    // cout<<it.first<<" "<<it.second<<endl;
    int ans = 0;
    int cnt=0;
    for (int i = 0; i < k; i++)
    {
        cnt+=freq[i].second%2;
        ans+=freq[i].second/2 * 2;
    }
    ans+=(cnt+1)/2;
    // int x = max(0, sets);
    // ans += x * 2;
    // sets -= x;
    cout << ans << endl;
    return 0;
}
