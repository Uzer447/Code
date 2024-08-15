#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
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
        int n;
        cin>>n;
        vi v(n);
        int cnt=0;
        int zero=0;
        int pos=0;
        rep(i,n)
        {
            cin>>v[i];
            if(v[i]<=0)
            cnt++;
        }
        sort(vall(v));
        pos=INT_MAX;
        rep(i,n)
        {
            if(v[i]>0)
            {
                pos=min(pos,v[i]);
            }
        }
        if(pos==INT_MAX)
        {
            cout<<cnt<<endl;
            continue;
        }
        bool flag=true;
        rep(i,n-1)
        {
            if(v[i]<=0)
            {
                flag&=(v[i+1]-v[i]>=pos);
            }
        }
        if(flag==1)
        {
            cout<<cnt+1<<endl;
        }
        else
        cout<<cnt<<endl;
    }

    return 0;
}
