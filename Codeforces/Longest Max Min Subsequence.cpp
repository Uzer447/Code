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
int arr[300005];
int c[300005];
int p[300005];
int visited[300005];
vi temp[300005];
void solve()
{
    int n;
    int point = 1e9;
    cin >> n;
    rep(i, n)
    {
        cin >> arr[i + 1];
        p[i + 1] = -1;
        c[i + 1] = 0;
        visited[i + 1] = 0;
        temp[i + 1].clear();
    }
    rep(i, n)
    {
        p[arr[i + 1]] = i + 1;
        temp[arr[i + 1]].pb(i + 1);
    }
    rep(i, n)
    {
        if (p[i + 1] != -1)
        {
            c[p[i + 1]]++;
            point = min(point, p[i + 1]);
        }
    }
    vi ans;
    for (int i = 1; i <= n;)
    {
        if (i == point)
        {
            ans.pb(arr[i]);
            c[p[arr[i]]]--;
            while (c[point] == 0 && point <= n)
                point++;
            i++;
        }
        else
        {
            if ((ans.size()) % 2 == 0)
            {
                int mx = 0;
                for (int j = i; j <= min(point, n); j++)
                {
                    if (!visited[j])
                        mx = max(mx, arr[j]);
                }
                for (int j = i; j <= min(point, n); j++)
                {
                    if (arr[j] == mx)
                    {
                        i = j + 1;
                        break;
                    }
                }
                if (mx == 0)
                    break;
                ans.pb(mx);
                c[p[mx]]--;
                while (c[point] == 0 && point <= n)
                {
                    point++;
                }
            }
            else
            {
                int mn = 1e9;
                for (int j = i; j <= min(point, n); j++)
                {
                    if (!visited[j])
                        mn = min(mn, arr[j]);
                }
                for (int j = i; j <= min(point, n); j++)
                {
                    if (arr[j] == mn)
                    {
                        i = j + 1;
                        break;
                    }
                }
                if (mn == 1e9)
                    break;
                ans.pb(mn);
                c[p[mn]]--;
                while (c[point] == 0 && point <= n)
                {
                    point++;
                }
            }
        }
        for (int i : temp[ans.back()])
            visited[i] = 1;
    }
    cout << ans.size() << endl;
    for (int i : ans)
        cout << i << " ";
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
