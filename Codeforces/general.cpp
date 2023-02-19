#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxn=INT_MIN;
    int minn=INT_MAX;
    int posmax=0;
    int posmin=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxn)
        {maxn=max(maxn,arr[i]);
        posmax=i;
        }
        if(arr[i]<minn)
        {
            minn=min(arr[i],minn);
            posmin=i;
        }
    }
    posmin=n-1-posmin;
    if(posmin+posmax != 0)
    cout<<posmin+posmax-1<<endl;
    else
    cout<<posmin+posmax<<endl;
    
    return 0;

}