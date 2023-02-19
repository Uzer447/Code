#include<bits/stdc++.h>
using namespace std;
int main() {
	
	
	int t;
	cin>>t;
	while(t>0)
	{
	    int A,B,A1,B1,A2,B2;
	    cin>>A>>B>>A1>>B1>>A2>>B2;
	    if((A1==A || A1==B) && (B1==A || B1==B))
	    cout<<1<<endl;
	    else if((A2==A || A2==B) && (B2==A || B2==B))
	    cout<<2<<endl;
	    else
	    cout<<0<<endl;
	    t--;
	}
	return 0;
}
