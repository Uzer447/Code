#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max=INT_MIN;
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        res+=(max-arr[i]);
    }
    cout<<res<<endl;
    return 0;
}