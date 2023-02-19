#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v;
    int maxans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int minans=INT_MAX;
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            minans=min(minans,a);
        }
        maxans=max(maxans,minans);
    }
    cout<<maxans<<endl;
    return 0;
}
