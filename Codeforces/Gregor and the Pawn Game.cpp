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
        string a,b;
        cin>>a>>b;
        int ans=0;
        rep(i,n)
        {
            if(b[i]=='1')
            {
                if(a[i]=='0' && a[i]!='2')
                {
                    ans++;
                    a[i]=='2';
                }
                else if(i-1>=0 && a[i-1]=='1' && a[i-1]!='2')
                {
                    ans++;
                    a[i-1]='2';
                }
                else if(i+1<n && a[i+1]=='1' && a[i+1]!='2')
                {
                    ans++;
                    a[i+1]='2';
                }
            }
            //cout<<a<<endl;
        }
        cout<<ans<<endl;
    }

    return 0;
}
