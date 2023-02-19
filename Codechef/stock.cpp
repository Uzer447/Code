#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	while(t>0)
	{
	    int s,a,b,c;
	    cin>>s>>a>>b>>c;
	    int final=s+(c/100)*s;
	    if(final>=a && final<=b)
	    cout<<"YES"<<endl;
	    else
	    cout<<"no"<<endl;
	    t--;
	}
	return 0;
}
