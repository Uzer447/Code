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
        int n=3;
        vi v(n);
        rep(i,n)
        cin>>v[i];
        sort(vall(v));
        if(v[1]!=v[2])
        cout<<"NO"<<endl;
        else cout<<"YES\n"<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
    }

    return 0;
}
