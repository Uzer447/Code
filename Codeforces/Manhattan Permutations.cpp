#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'
#define int long long
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define fr(i, begin, end) for (__typeof(begin) i = (begin); i != (end) + ((begin) > (end) ? -1 : 1) ; (begin) > (end) ? i-- : i++)
#define rep(i,n) for(int i=0; i<n; i++)
#define ret(msg) {cout << msg << endl; return;}
#define prt(a) cout << a << endl;
#define prt2(a,b) cout << a << " " << b << endl;
#define popcnt(x) __builtin_popcountll(x)
#define uniq(s) s.erase(unique(s.begin(),s.end()),s.end())
#define mod 1000000007
#define MOD 998244353

void solve() {
    int n, k;
    cin >> n >> k;

    if(k%2 != 0) ret("No")

    k /= 2;

    int i=0, j=n-1;

    vi ans(n);
    rep(i,n) ans[i] = i+1;

    while(i<j) {
        if(k<=j-i) {
            swap(ans[i], ans[i+k]);
            k = 0;
            break;
        } else {
            swap(ans[i], ans[j]);
            k -= (j-i);
            i++;
            j--;
        }
    }
    if(k != 0) ret("No")
    prt("Yes")

    for(int x: ans) cout << x << " ";
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
}