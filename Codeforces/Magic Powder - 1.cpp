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
bool isPossible(vector<int> &a,vector<int> &b,int mid,int n,int k)
{
    int cost=0;
    rep(i,n)
    {
        cost+=max(0,a[i]*mid-b[i]);
    }
    return cost<=k;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,n)
    cin>>a[i];
    vi b(n);
    rep(i,n)
    cin>>b[i];
    int low=0;
    int high=3000;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(isPossible(a,b,mid,n,k))
        low=mid+1;
        else
        high=mid-1;
    }
    cout<<high<<endl;
    return 0;
}
