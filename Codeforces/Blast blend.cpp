#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    double t;
    cin >> t;
    while (t--)
    {
        double n;
        cin>>n;
        double x;
        cin>>x;
        double ans=0;
        vector<double> a(n);
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
        vector<double> b(n);
        for(int i=0;i<n;i++)
        {
        cin>>b[i];
        }
        vector<pair<pair<double,double>,double>> v(n);
        for(int i=0;i<n;i++)
        {
            v.push_back({{b[i]/a[i],b[i]},a[i]});
        }
        sort(v.begin(),v.end(),greater<pair<pair<double,double>,double>>());
        for(auto it:v)
        {
            if(x>=it.second)
            {
                ans+=it.first.second;
                x-=it.second;
            }
            else
            {
                ans+=((x/it.second)*it.first.second);
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
