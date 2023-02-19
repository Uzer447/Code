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
	int x=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		x=x^a;
	}
	int x1=0;
	for(int i=0;i<n-1;i++)
	{
		int a;
		cin>>a;
		x1=x1^a;	
		x=x^a;
	}
	cout<<x<<endl;
	for(int i=0;i<n-2;i++)
	{
		int a;
		cin>>a;
		x1^=a;
	}
	cout<<x1<<endl;
}