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
        int count=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a%2);
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]!=i%2)
            count++;
        }
        if(count%2==1)
        cout<<-1<<endl;
        else
        cout<<count/2<<endl;
    }
    return 0;
}