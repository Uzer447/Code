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
    int t=1;
    while (t--)
    {
        int n;
        cin>>n;
        ll fact=1;
        ll res=1;
        for(int i=1;i<=n-1;i++)
        {
            fact*=i;
            res*=2;
            fact%=MOD;
            res%=MOD;
        }
        fact*=n;
        fact%=MOD;
        fact-=res;
        fact%=MOD;
        if(fact<0)
        fact+=MOD;
        cout<<fact<<endl;
    }

    return 0;
}
