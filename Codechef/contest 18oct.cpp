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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
        cin>>v[i];
        }
        rep(i,n)
        {
            if(v[i+1]<v[i] && mark[i]==0)
            {
                mark[i+1]=1;
            }
            else
            {
                mark[i]=0;
            }
            if(mark[i]==1 && v[i+1]>v[i])
            {
                mark[i+1]=1;
            }
            else if(mark[i]==1 && v[i+1]<v[i])
            {

            }
        }
    }

    return 0;
}
