#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int count=0;
	    //vector<int> q;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        //q.push_back(a);
            if(a>k)
            count++;
	    }
	    //for(int i=0;i<n;i++)
        //{
           // if(q[i]>k)
            //count++;
        //}
	        
	        
	    
	    cout<<count<<endl;
	    
	    
	    
	    
	    
	}
	return 0;
}
