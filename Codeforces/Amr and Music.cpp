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
    vector<pii> v;
    rep(i, n)
    {
        int a,b;
        cin>>a;
        b=i+1;
        v.pb({a,b});
    }
    int cnt = 0;
    sort(vall(v));
    int sum = v[0].first;
    int i = 1;
    while (sum <= k)
    {
        sum += v[i].first;
        cnt++;
        i++;
    }
    cnt=min(cnt,n);
    cout << cnt << endl;
    rep(i,cnt)
    {
        cout<<v[i].second << " ";
    }
    cout<<endl;
    return 0;
}
