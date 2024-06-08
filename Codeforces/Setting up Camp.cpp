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
        int a,b,c;
        cin>>a>>b>>c;
        int ans=a;
        int x=b/3;
        ans+=x;
        x=b%3;
        if(x>0)
        {
            if(x==1)
            c-=2;
            else if(x==2)
            c-=1;
            ans++;
        }
        int y=c/3;
        ans+=y;
        if(c%3!=0)
        ans++;
        if(c<0)
        ans=-1;
        cout<<ans<<endl;
    }

    return 0;
}
