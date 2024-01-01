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
    int n;
    cin>>n;
    int i=1;
    while(true)
    {
        int x=i*(i+1);
        x/=2;
        n=n-x;
        if(n<=0)
        break;
        i++;
    }
    if(n<0)
    cout<<i-1<<endl;
    else
    cout<<i<<endl;
    return 0;
}
