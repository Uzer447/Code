#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int score(vector<int> &v,int n)
{
    int ans=0;
    forn(n)
    {
        if(v[i]%2==0)
        ans+=v[i];
    }
    return ans;
}
vector<int> distribute(vector<int> v,int n,int ind,int x)
{
    //int x=v[ind];
    int i=(ind+1)%n;
    while(x--)
    {
        v[i%n]++;
        i++;
    }
    return v;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n = 14;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans=0;
    forn(n)
    {
        int x=v[i];
        v[i]=0;
        vector<int> temp=distribute(v,n,i,x);
        v[i]=x;
        int s=score(temp,n);
        ans=max(ans,s);
    }
    cout<<ans<<endl;
    return 0;
}
