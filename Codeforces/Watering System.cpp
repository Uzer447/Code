#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> v;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        v.push_back(s);
        sum+=s;
    }
    int first=v[0];
    sort(v.begin(),v.end(),greater<int>());
    int ans=0;
    if(temp>=b)
        {
            break;
        }
        
    for(int i=1;i<n;i++)
    {
        int temp=a*first;
        temp/=sum;
        cout<<temp<<endl;
        if(temp>=b)
        {
            break;
        }
        else
        {
            ans++;
            if(v[i]!=first)
            sum-=v[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}
