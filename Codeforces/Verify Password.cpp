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
        string s;
        cin >> s;
        int dig = -1;
        int ch = -1;
        vector<int> digits;
        vector<char> v;
        rep(i, n)
        {
            if (s[i] >= '0' && s[i] <= '9')
                digits.pb(s[i] - '0');
            else
                v.pb(s[i]);
            if (s[i] >= '0' && s[i] <= '9' && dig == -1)
            {
                dig = i;
            }
            if (s[i] >= 'a' && s[i] <= 'z' && ch == -1)
            {
                ch = i;
            }
        }
        if (dig > ch && ch != -1 && dig != -1)
        {
            cout << "NO" << endl;
            continue;
        }
        int flag = 1;
        if(dig!=-1)
        {for (int i = 0; i < digits.size() - 1; i++)
        {
            if (digits[i] > digits[i + 1])
            {
                flag = 0;
                break;
            }
        }}
        if (flag == 1 && ch!=-1)
        {
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (v[i] > v[i + 1])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
