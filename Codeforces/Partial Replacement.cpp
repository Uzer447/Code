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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int first = -1;
        int last = -1;
        rep(i, n)
        {
            if (s[i] == '*' && first == -1)
            {
                first = i;
            }
            if (s[i] == '*')
            {
                last = i;
            }
        }
        // s[first]='x';
        // s[last]='x';
        s[first] = 'x';
        int cnt = 1;
        int i = first;
        for (; i < last;)
        {
            int temp;
            for (int j = 0; j <= k; j++)
            {
                if (i+j<n && s[i + j] == '*')
                    temp = i + j;
            }
            i = temp;
            s[temp] = 'x';
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
