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
    vi v(n);
    rep(i,n)
    cin>>v[i];
    int cnt=0;
    int maxind;
    int minind;
    int minele=101;
    int maxele=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>maxele)
        {
            maxele=v[i];
            maxind=i;
        }
    }
    for(int i=maxind;i>0;i--)
    {
        swap(v[i],v[i-1]);
        cnt++;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]<minele)
        {
            minele=v[i];
            minind=i;
        }
    }
    for(int i=minind;i<n-1;i++)
    {
        swap(v[i],v[i+1]);
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
