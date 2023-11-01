#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
        int n;
        cin>>n;
        while(n!=1)
        {
            cout<<n<<" ";
            if(n%2==0)n/=2;
            else n=n*3+1;
        }
        cout<<1<<endl;
    return 0;
}
