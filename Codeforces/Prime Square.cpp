#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
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
        vector<vector<int>> v(n,vector<int>(n,1));
        int i=n+3;
        while(true)
        {
            if(isPrime(i) && !isPrime(i-n+1))
            break;
            i++;
        }
        int x=i-(n-1);
        rep(j,n)
        {
            v[j][j]=x;
        }
        rep(j,n)
        {
            rep(k,n)
            {
                cout<<v[j][k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
