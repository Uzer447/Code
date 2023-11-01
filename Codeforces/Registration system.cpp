#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<string> v(n);
    unordered_map<string, bool> mp;
    int c=1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (mp[v[i]] == false)
        {
            mp[v[i]] = true;
            cout << "OK" << endl;
        }
        else
        {
            cout<<v[i]+to_string(c)<<endl;
            mp[v[i]+to_string(c)] = true;
            c++;
        }
    }

    return 0;
}
