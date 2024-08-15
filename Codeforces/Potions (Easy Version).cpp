#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
//#define endl "\n"

ll mod = 1e9+7;
//ll mod = 998244353;
//const int N = 2e5+5;

template<typename T1, typename T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
const ll INF = 1e18;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc = 1; 
	// cin>>tc;
	// cin.ignore();
	while(tc--){	
		ll n;
		cin>>n;
		vector<ll>a(n);
		cin>>a;
		vector<vector<ll>>dp(n+1,vector<ll>(n+1,-1e18));
		for(int i = 0;i<=n;i++){
			dp[i][0] = 0;
		}
		for(int i = 0;i<n;i++){
			for(int j = 1;j<=n;j++){
				ll x = dp[i][j-1]+a[i];
				if((dp[i][j-1]+a[i])<0)x = -1e18;
				dp[i+1][j] = max(dp[i+1][j],max(dp[i][j],x));
			}
		}
		int ans = 0;
		for(int i = 1;i<=n;i++){
			for(int j = 0;j<=n;j++){
				if(dp[i][j]>=0)ans = max(ans,j);
			}
		}
		cout<<ans<<endl;
	}
}