#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int key=v[--k];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=key && v[i]!=0)count++;
    }
    cout<<count<<endl;
    return 0;
}