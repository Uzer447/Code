#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> cans;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cans.push_back({a,i+1});
    }
    sort(cans.begin(),cans.end());
    
    cout<<endl;
    ll ans=0;
    int k=0;
    for(int i = n-1; i>=0;i--)
    {

        ans+=(k*cans[i].first +1);
        k++;
    }
    cout<<ans<<endl;
    for(int j = n-1; j>=0;j--)
    {
        cout<<cans[j].second<<" ";
    }
    cout<<endl;

    return 0;
}