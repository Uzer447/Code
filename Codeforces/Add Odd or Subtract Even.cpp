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
        int a,b;
        cin>>a>>b;
        int ans=0;
        while(b!=a)
        {
            if(b>a)
            {
                if((b-a)%2==1)
                {
                    ans++;
                    break;
                }
                else
                {
                    a+=(b-a-1);
                    ans++;
                }
            }
            else
            {
                if((a-b)%2==0)
                {
                    ans++;
                    break;
                }
                else
                {
                    a-=(a-b+1);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
