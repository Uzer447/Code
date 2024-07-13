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
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vi v(n);
        int odd=0;
        int even=0;
        rep(i,n)
        {
            cin>>v[i];
            if(v[i]%2==0)
            even++;
            else
            odd++;
        }
        int flag=0;
        for(int i=1;i<=min(odd,x);i+=2)
        {
            if(even>=x-i)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}
