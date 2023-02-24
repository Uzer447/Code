#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
   	int n,m,k;
   	cin>>n>>m>>k;
   	vector<int> v;
   	forn(m)
   	{
   		int a;
   		cin>>a;
   		v.push_back(a);
   	}
   	int f;
   	cin>>f;
   	int ans=0;
   	forn(m)
   	{
   		int o=(~v[i]&f);
   		if(__builtin_popcount(o)<=k)ans++;
   	}
   	cout<<ans<<endl;
    return 0;
}
