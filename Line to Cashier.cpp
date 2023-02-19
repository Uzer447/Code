#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int minpos=0;
    int minans=INT_MAX;
    for(int j=0;j<n;j++)
    {
        int i=v[j];
        int sum=0;
        int count=i;
        while(i--)
        {
            int a;
            cin>>a;
            sum+=a;
        }
        sum*=5;
        sum+=count*15;
        if(sum<minans)
        {
            minans=sum;
            minpos=j;
        }
    }
    cout<<minans<<endl;

    return 0;
}