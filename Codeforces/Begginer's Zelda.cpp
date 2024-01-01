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
vi freq(1e6+5);
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
        
        rep(i,n-1)
        {
            int a,b;
            cin>>a>>b;
            freq[a]++;
            freq[b]++;
        }
        int k=0;
        for(int i=1;i<=n;i++)
        {
            if(freq[i]==1)
            k++;
            freq[i]=0;
        }
        cout<<(k+1)/2<<endl;
    }

    return 0;
}
