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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v={0,0,0,0,0};
        rep(i,n)
        {
            rep(i,5)
            {
                int a;
                cin>>a;
                if(a==1)
                {
                    v[i]++;
                }
            }
        }
        int cnt=0;
        rep(i,5)
        {
            //cout<<v[i]<<" ";
            if(2*v[i]>=n)
            {
                cnt++;
            }
        }
        if(cnt>1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
