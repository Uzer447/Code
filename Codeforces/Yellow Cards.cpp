#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll a1, a2, k1, k2, n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    if(k1>k2)
    {
        swap(a1, a2);
        swap(k1, k2);
    }
    ll cnt=max(0LL,n-(a1*(k1-1)+a2*(k2-1)));
    cout<<cnt<<" ";
    if(n<=a1*k1)
    {
        cout<<n/k1;
    }
    else
    {
        cout<<a1+(n-a1*k1)/k2<<endl;
    }

    return 0;
}
