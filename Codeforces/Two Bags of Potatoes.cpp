#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int y,k,n;
    cin>>y>>k>>n;
    int cnt=0;
    vector<int> v;
    
    for(int i=k;i<=n;i+=k)
    {
        if(i+)
        {
            v.push_back(i-y);
            cnt++;
        }
    }
    if(cnt==0 || y==n)
    cout<<-1;
    else
    {
        for(auto it:v)
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}
