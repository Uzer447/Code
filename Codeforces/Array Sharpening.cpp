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
        int n;
        cin>>n;
        vi v(n);
        rep(i,n)cin>>v[i];
        if(n==1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        int prefix=0;
        int suffix=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]>=i)
            {
                prefix++;
            }
            else
            break;
        }
        for(int i=0; i<n;i++)
        {
            if(v[n-i-1]>=i)
            {
                suffix++;
            }
            else 
            break;
        }
        if(prefix+suffix<=n)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;

    }

    return 0;
}
