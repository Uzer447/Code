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
        int n, k;
        cin >> n >> k;
        vi vis(n + 1, 0);
        vis[0] = 1;
        queue<int> q;
        rep(i, k)
        {
            int a;
            cin >> a;
            vis[a] = 1;
            q.push(a);
        }
        int cnt = 1;
        while (!q.empty())
        {
            int size = q.size();
            int flag = 0;
            rep(i, size)
            {
                int ind = q.front();
                //cout << ind << endl;
                q.pop();
                if (ind - 1 >= 1 && !vis[ind - 1])
                {
                    vis[ind - 1] = 1;
                    q.push(ind - 1);
                    flag = 1;
                }
                if (ind + 1 <= n && !vis[ind + 1])
                {
                    flag = 1;
                    vis[ind + 1] = 1;
                    q.push(ind + 1);
                }
            }
            if (flag)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
