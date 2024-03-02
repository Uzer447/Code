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
    int a=n/100;
    n%=100;
    a+=n/20;
    n%=20;
    a+=n/10;
    n%=10;
    a+=n/5;
    n%=5;
    a+=n/1;
    n%=1;
    cout<<a<<endl;
    return 0;
}
