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
        vi a(n);
        rep(i, n) cin >> a[i];
        sort(vall(a));
        ll sum = a[0];
        for (int i = 1; i < n; i++)
        {
            if (sum >= a[i])
            {
                int ind=upper_bound(a.begin()+i+1,a.end(),sum)-a.begin();
                if(ind<n)
                swap(a[i],a[ind]);
            }
            sum += a[i];
        }
        sum = a[0];
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (sum >= a[i])
                cnt++;
            sum += a[i];
        }
        cout << cnt << endl;
        rep(i, n)
                cout
            << a[i] << " ";
        cout << endl;
    }

    return 0;
}
