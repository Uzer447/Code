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
        ll a,b,c;
        cin>>a>>b>>c;
        ll sum=a+b+c;
        ll m=min(a,min(b,c));
        if(sum%9==0 && m>=sum/9)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
