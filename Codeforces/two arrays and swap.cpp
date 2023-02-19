#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n,0);
        vector<int> b(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int left=0;
        int right=n-1;
        while(k--)
        {
            if(b[right]>a[left])
            {
                swap(a[left],b[right]);
                left++;
                right--;
            }
        }
        int ans=accumulate(a.begin(),a.end(),0);
        cout<<ans<<endl;
    }
    return 0;
}