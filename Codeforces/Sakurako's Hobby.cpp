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
        ll n;
        cin>>n;
        vll p(n+1);
        vll b(n+1);
        vll us(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>p[i];
        }
        string s;
        cin>>s;
        for(int i=1;i<=n;i++)
        {
            if(us[i])
            {
                continue;
            }
            int sz=0;
            while(!us[i])
            {
                us[i]=1;
                sz+=s[i-1]=='0';
                i=p[i];
            }
            while(us[i]!=2)
            {
                b[i]=sz;
                us[i]=2;
                i=p[i];
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
