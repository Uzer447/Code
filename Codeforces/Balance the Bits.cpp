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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (s[i] == '1');
        }
        if (cnt % 2 == 1 || s[0] == '0' || s.back() == '0')
        {
            cout << "NO\n";
            continue;
        }
        string a, b;
        int k = 0;
        bool flip = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                a.push_back(2 * k < cnt ? '(' : ')');
                b.push_back(a.back());
                k++;
            }
            else
            {
                a.push_back(flip ? '(' : ')');
                b.push_back(flip ? ')' : '(');
                flip = !flip;
            }
        }
        cout << "YES\n";
        cout << a << "\n"
             << b << endl;
    }

    return 0;
}
