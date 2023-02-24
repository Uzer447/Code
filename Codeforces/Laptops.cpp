#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    forn(n)
    {
    	int a,b;
    	cin>>a>>b;
    	v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    int flag=0;
    forn(n-1)
    {
    	if(v[i].second>v[i+1].second)
    	{
    		flag=1;
    		break;
    	}
    }
    if(flag)
    	cout<<"Happy Alex"<<endl;
    else
    	cout<<"Poor Alex"<<endl;
    return 0;
}
