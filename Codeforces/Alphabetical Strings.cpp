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
        string s;
        cin >> s;
        size_t ind=s.find('a');
        int flag = 1;
        int n = s.size();
        if (ind == string::npos)
        {
            no;
            continue;
        }
        size_t l = ind;
        size_t r = l;
        for (size_t i = 1; i < n; i++)
        {
            size_t pos = s.find(char('a' + i));
            if (pos == string::npos || (pos != l - 1 && pos != r + 1))
            {
                flag = 0;
                break;
            }
            else
            {
                l = min(l, pos);
                r = max(r, pos);
            }
        }
        if(flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}
