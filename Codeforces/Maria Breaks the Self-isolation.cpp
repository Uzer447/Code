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
        rep(i,n)
        {
            cin>>v[i];
        }
        sort(vall(v));
        int flag=0;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]<=i+1)
            {
                cout<<i+2<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<1<<endl;
    }

    return 0;
}
