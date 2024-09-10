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
bool check(vi &v, int mid)
{
    int cnt = 0;
    rep(i, v.size())
    {
        if (v[i] != i + 1)
        {
            cnt++;
        }
    }
    return cnt == mid;
}
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
        set<int> st;
        for (int i = 1; i <= n; i++)
        {
            st.insert(i);
        }
        vector<int> rem;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            if (st.find(v) != st.end())
            {
                st.erase(v);
            }
            else
            {
                rem.push_back(v);
            }
        }
        sort(rem.begin(), rem.end());
        reverse(rem.begin(), rem.end());
        int pt = 0;
        bool err = false;
        for (auto &nx : rem)
        {
            auto it = st.end();
            it--;
            int ctg = (*it);
            if (ctg > (nx - 1) / 2)
            {
                err = true;
                break;
            }
            st.erase(it);
        }
        if (err)
        {
            cout << "-1\n";
        }
        else
        {
            cout << rem.size() << '\n';
        }
    }

    return 0;
}
