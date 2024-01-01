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
        rep(i, n)
                cin >>
            v[i];
        int flag = 1;
        rep(i, n - 1)
        {
            if (v[i + 1] - v[i] != 1)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
        {
            int ans1 = 1;
            vi temp = v;
            v[0] = temp[0] - 1;
            for (int i = 1; i < n; i++)
            {
                if (v[i] - v[i - 1] == 1 || v[i] - 1 - v[i - 1] == 1 || v[i] + 1 - v[i - 1] == 1)
                {
                    if (v[i] - 1 - v[i - 1] == 1)
                        v[i]--;
                    else if (v[i] + 1 - v[i - 1] == 1)
                        v[i]++;
                }
                else
                {
                    ans1 = 0;
                    break;
                }
            }
            int ans2 = 1;
            v = temp;
            v[0] = temp[0] + 1;
            for (int i = 1; i < n; i++)
            {
                if (v[i] - v[i - 1] == 1 || v[i] - 1 - v[i - 1] == 1 || v[i] + 1 - v[i - 1] == 1)
                {
                    if (v[i] - 1 - v[i - 1] == 1)
                        v[i]--;
                    else if (v[i] + 1 - v[i - 1] == 1)
                        v[i]++;
                }
                else
                {
                    ans2 = 0;
                    break;
                }
            }
            if (ans1 == 1 || ans2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
