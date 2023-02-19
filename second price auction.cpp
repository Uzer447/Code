#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int mx=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        mx=max(mx,a);
        v.push_back(a);
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]==mx)
        {
            cout<<i+1<<" ";
            break;
        }
    }
    sort(v.begin(), v.end());
    int p=v[n-2];
    cout<<p<<endl;
    return 0;
}