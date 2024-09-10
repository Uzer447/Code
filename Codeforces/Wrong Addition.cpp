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
        long long a, s;
        cin >> a >> s;
        vector<int> ad, sd;
        while (a > 0)
        {
            ad.push_back(a % 10);
            a /= 10;
        }
        while (s > 0)
        {
            sd.push_back(s % 10);
            s /= 10;
        }
        int n = sd.size(), m = ad.size();
        vector<int> ans;
        int i = 0, j = 0;
        bool possible = true;
        while (i < n)
        {
            if (j < m && sd[i] >= ad[j])
            {
                ans.push_back(sd[i] - ad[j]);
                i++;
                j++;
            }
            else if (j < m && i + 1 < n && sd[i + 1] == 1)
            {
                int t = 10 + sd[i];
                if (t - ad[j] >= 0 && t - ad[j] < 10)
                {
                    ans.push_back(t - ad[j]);
                    i += 2;
                    j++;
                }
                else
                {
                    possible = false;
                    break;
                }
            }
            else if (j >= m && i < n)
            {
                ans.push_back(sd[i]);
                i++;
            }
            else
            {
                possible = false;
                break;
            }
        }
        if (!possible || j < m)
        {
            cout << -1 << endl;
        }
        else
        {
            while (ans.size() > 1 && ans.back() == 0)
                ans.pop_back();
            reverse(ans.begin(), ans.end());
            for (auto c : ans)
                cout << c;
            cout << endl;
        }
    }

    return 0;
}
