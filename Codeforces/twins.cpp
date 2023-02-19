#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        sum+=a;
    }
    sort(v.begin(), v.end(),greater<int>());
    int cnt=0;
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(sum<x)
        break;
        x+=v[i];
        sum-=v[i];
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}