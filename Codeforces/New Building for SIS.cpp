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
    int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    while(k--)
    {
        int t1,f1,t2,f2;;
        cin>>t1>>f1>>t2>>f2;
        int ans=0;
        if(t1==t2 && f1==f2)
        {
            ans=0;
        }
        else if(t1==t2)
        {
            ans=abs(f2-f1);
        }
        else if(f1>=a && f1<=b)
        {
            ans+=abs(t2-t1);
            ans+=abs(f2-f1);
        }
        else
        {
            if(f1<a)
            {
                ans+=a-f1;
                f1=a;
            }
            else if(f1>b)
            {
                ans+=f1-b;
                f1=b;
            }
            ans+=abs(t2-t1);
            ans+=abs(f2-f1);
        }
        cout<<ans<<endl;
    }

    return 0;
}
