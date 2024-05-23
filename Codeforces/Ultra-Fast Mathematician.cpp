#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    string t;
    cin >> t;
    int n = s.size();
    rep(i, n)
    {
        if (s[i] != t[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << endl;
    return 0;
}
