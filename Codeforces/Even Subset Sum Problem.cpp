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
        vi v(n);
        vi even;
        vi odd;
        rep(i, n)
        {
            cin >> v[i];
            if(v[i]%2 == 0)
            even.pb(i+1);
            else
            odd.pb(i+1);
        }
        if(even.size()==0 && odd.size()<2)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(even.size()==0)
            {
                cout<<2<<endl;
                cout<<odd[0]<<" "<<odd[1]<<endl;
            }
            else
            {
                cout<<1<<endl;
                cout<<even[0]<<endl;
            }
        }
    }

    return 0;
}
