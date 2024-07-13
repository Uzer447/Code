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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        int mx = 0;
        rep(i, n)
        {
            cin >> v[i];
            if (v[i] > v[mx])
                mx = i;
        }
        vi ans;
        ans.pb(v[mx]);
        int curr = v[mx];
        v[mx] = 0;
        for (int i = 1; i < n; i++)
        {
            int maxi = 0;
            int ind = 0;
            for (int j = 0; j < n; j++)
            {
                if (v[j] != 0)
                {
                    if (__gcd(curr, v[j]) > maxi)
                    {
                        maxi = __gcd(curr, v[j]);
                        ind = j;
                    }
                }
            }
            curr = maxi;
            ans.pb(v[ind]);
            v[ind] = 0;
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
