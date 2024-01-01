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
    int n,x,y;
    cin>>n>>x>>y;
    vi v(n);
    rep(i,n)
    cin>>v[i];
    for(int i=0;i<n;i++)
    {
        int leftmin=INT_MAX;
        int rightmin=INT_MAX;
        int j=i-1;
        rep(k,x)
        {
            if(j<0)
            break;
            leftmin=min(leftmin,v[j]);
            j--;
        }
        j=i+1;
        rep(k,y)
        {
            if(j>=n)
            break;
            rightmin=min(rightmin,v[j]);
            j++;
        }
        //cout<<leftmin<<" "<<rightmin<<endl;
        if(v[i]<leftmin && v[i]<rightmin)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
