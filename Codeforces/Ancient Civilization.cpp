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
const int SIZE = 1e6 + 10;
bool isKthBitSet(int n, int k)
{
    int mask = 1 << (k);
    return ((n & mask) != 0) ? true : false;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        vi v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        string y="";
        for (int i = 0; i <= 30; i++)
        {
            int one=0;
            for (auto it : v)
            {
                if (isKthBitSet(it, i))
                {
                    one++;
                }
                else
                {
                    one--;
                }
            }
            if (one > 0)
            {
                y = y + "1";
            }
            else
            {
                y = y + "0";
            }
        }
        int ans=0;
        for(int i=0;i<=30;i++)
        {
            if(y[i]=='1')
            {
                ans=ans+(1<<i);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
