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
vector<ll> spf(SIZE,0);
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    for(ll i=2;i<SIZE;i++)
    {
        if(isPrime(i))
        {
            spf[i]=i;
            for(ll j=i*i;j<SIZE;j+=i)
            {
                if(spf[j]==0)
                spf[j]=i;
            }
        }
    }
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        n+=spf[n];
        k--;
        n+=2*k;
        cout<<n<<endl;
    }

    return 0;
}
