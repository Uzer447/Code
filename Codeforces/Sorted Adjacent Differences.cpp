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
        int i=(n/2)-1;
        int j=i+1;
        while(i>=0 && j<n)
        {
            cout<<v[j]<<" "<<v[i]<<" ";
            j++;
            i--;
        }
        if(j<=n-1)
        {
            cout<<v[j];
        }
        cout<<endl;
        // for(auto it:v)
        // cout<<it<<" ";
        // cout<<endl;
    }

    return 0;
}
