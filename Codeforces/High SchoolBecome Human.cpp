#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll x,y;
    cin>>x>>y;
    if (x == y)
		cout<<'=';
		//return 0;
	else if( x == 1)
		cout<<'<';
		//return 0;
	else if (y == 1)
		cout<<'>';
		//return 0;
	else if (x + y == 6)
		cout<<'=';
		//return 0;
	else if (x == 3)
		cout<<'>';
		//return 0;
	else if (y == 3)
		cout<<'<';
		//return 0;
	else if (x < y)
		cout<<'>';
	else
		cout<<'<';
    return 0; 
}
