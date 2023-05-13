#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> data(n);
    data[0]=v[0];
    for(int i=1;i<n;i++)
    {
        data[i]=(data[i-1]+v[i]);
    }
    
    int m;
    cin>>m;
    while(m--)
    {
        int k;
        cin>>k;
        int it=lower_bound(data.begin(), data.end(),k)-data.begin();
        cout<<++it<<endl;
    }


    return 0;
}
