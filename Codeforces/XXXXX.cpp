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
        int n,x;
        cin>>n>>x;
        vi v(n);
        int div=0;
        rep(i,n)
        {
            cin>>v[i];
            div+=v[i]%x;
        }
        int sum=accumulate(vall(v),0);
        if(sum%x!=0)
        {
            cout<<n<<endl;
            continue;
        }
        if(div==0)
        {
            cout<<-1<<endl;
            continue;
        }
        int l;
        int r;
        for(int i=0;i<n;i++)
        {
            if(v[i]%x!=0)
            {
                l=i+1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]%x!=0)
            {
                r=n-i;
                break;
            }
        }
        cout<<n-(min(l,r))<<endl;
    }

    return 0;
}
