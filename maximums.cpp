#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    //vector<int> b;
    ll sum=0;
    ll maxsum=INT_MIN;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
        maxsum=max(maxsum,sum);
        //b.push_back(sum);
        cout<<sum<<" ";
        sum=maxsum;
    }
    // for(auto i:b)
    // {
    //     cout<<i<<" ";
    // }
    cout<<endl;
    return 0;
}