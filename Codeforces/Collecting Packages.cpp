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
        vector<pii> v;
        rep(i, n)
        {
            int x, y;
            cin >> x >> y;
            v.pb({x, y});
        }
        sort(vall(v));
        v.insert(v.begin(), {0, 0});
        n++;
        int flag = 1;
        for (int i = 1; i < n; i++)
        {
            int x, y;
            x = v[i].first;
            y = v[i].second;
            int a, b;
            a = v[i - 1].first;
            b = v[i - 1].second;
            if (x - a < 0 || y - b < 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout<<"YES"<<endl;
            for (int i = 1; i < n; i++)
            {
                int x, y;
                x = v[i].first;
                y = v[i].second;
                int a, b;
                a = v[i - 1].first;
                b = v[i - 1].second;
                if (x - a < 0 || y - b < 0)
                {
                    flag = 0;
                    break;
                }
                rep(i, x - a)
                {
                    cout<<"R";
                }
                rep(i, y - b)
                {
                    cout<<"U";
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
