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
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vi a(n);
        vi b(m);
        rep(i, n)
        {
            cin >> a[i];
        }
        rep(i, m)
        {
            cin >> b[i];
        }
        int k = (1LL << 9) - 1;
        for(int val=0;val<=k;val++)
        {
            int flag=1;
            for(int i=0;i<n;i++)
            {
                int flag1=0;
                for(int j=0;j<m;j++)
                {
                    if(((a[i]&b[j])|val)==val)
                    {
                        flag1=1;
                        break;
                    }
                }
                flag&=flag1;
                if(flag==0)
                {
                    break;
                }
            }
            if(flag)
            {
                cout<<val<<endl;
                break;
            }
        }
    }

    return 0;
}
