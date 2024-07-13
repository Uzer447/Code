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
    int t = 1;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;
        int ans = 0;
        while (true)
        {
            int idx = -1;
            for (int i = 0; i < n; i++)
                if (((i && s[i] - s[i - 1] == 1) || (i < n - 1 && s[i] - s[i + 1] == 1)) && (idx == -1 || s[i] > s[idx]))
                idx = i;
            if (idx == -1)
                break;
            s = s.substr(0, idx) + s.substr(idx + 1, n - idx - 1);
            n--, ans++;
        }
        cout << ans;
    }

    return 0;
}
