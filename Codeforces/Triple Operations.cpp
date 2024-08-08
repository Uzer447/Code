#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define print(X) cout << X << endl;
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 2e5 + 10;
ll func(ll x)
{
    ll cnt=0;
    while(x>0)
    {
        x/=3;
        cnt++;
    }
    return cnt;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    vll psum(SIZE);
    psum[0]=0;
    vll a(SIZE);
    for(int i=1;i<SIZE;i++)
    {
        a[i]=func(i);
    }
    for(int i=1;i<SIZE;i++)
    {
        psum[i]=psum[i-1]+a[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout<<psum[r]-psum[l-1]+a[l]<<endl;
    }

    return 0;
}
