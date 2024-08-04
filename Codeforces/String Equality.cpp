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
        int i, n, k;
        string a, b;
        cin >> n >> k >> a >> b;
        array<int, 27> have{}, need{};
        for (auto &c : a)
            have[c - 'a']++;
        for (auto &c : b)
            need[c - 'a']++;
        bool bad = false;
        for (i = 0; i < 26; i++)
        {
            if (have[i] < need[i] || (have[i] -= need[i]) % k)
                bad = true;
            have[i + 1] += have[i];
        }
        cout << (bad ? "No" : "Yes") << '\n';
    }

    return 0;
}
