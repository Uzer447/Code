#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        priority_queue<int,vector<int>,greater<int>> q;

        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++)
        {
            int a=abs(v[i]-v[i-1]);
            q.push(a);
        }  
        cout<<q.top()<<endl;
    }
    
    return 0;
}