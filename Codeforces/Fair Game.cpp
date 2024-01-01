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
    int n;
    cin >> n;
    vi v(101, 0);
    set<int> st;
    vi ans;
    rep(i, n)
    {
        int a;
        cin >> a;
        st.insert(a);
        v[a]++;
    }
    if (st.size() == 2)
    {
        for (auto it : st)
        {
            if (v[it] != 0)
            {
                ans.push_back(it);
            }
        }
        if (v[ans[0]]==v[ans[1]])
        {
            cout << "YES" << endl;
            for (auto it : st)
                cout << it << " ";
            cout << endl;
        }
        else
        {
            cout<< "NO"<< endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
