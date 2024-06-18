#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        f--;
        vector<pii> v;
        rep(i,n)
        {
            int a;
            cin>>a;
            v.pb({a,0});
        }
        rep(i,n)
        {
            if(v[i].first==v[f].first)
            {
                v[i].second=1;
            }
        }
        sort(vall(v),greater<pii>());
        int remove=0;
        int notremove=0;
        for(int i=0;i<k;i++)
        {
            if(v[i].second==1)
            {
                remove++;
            }
        }
        for(int i=k;i<n;i++)
        {
            if(v[i].second==1)
            notremove++;
        }
        if(remove>0 && notremove>0)
        {
            cout<<"MAYBE"<<endl;
        }
        else if(remove>0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
