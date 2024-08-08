#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int n = s.length();
        bool yes = true;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == '0')
            {
                a--;
                if (s[n - 1 - i] == '0')
                {
                    a--;
                }
                else if (s[n - 1 - i] == '1')
                {
                    yes = false;
                }
                else
                {
                    if (a >= 1)
                    {
                        a--;
                        s[n - 1 - i] = '0';
                    }
                    else
                    {
                        yes = false;
                    }
                }
            }
            else if (s[i] == '1')
            {
                b--;
                if (s[n - 1 - i] == '1')
                {
                    b--;
                }
                else if (s[n - 1 - i] == '0')
                {
                    yes = false;
                }
                else
                {
                    if (b >= 1)
                    {
                        s[n - 1 - i] = '1';
                        b--;
                    }
                    else
                    {
                        yes = false;
                    }
                }
            }
            else
            {
                if (s[n - 1 - i] != '?')
                {
                    if (s[n - 1 - i] == '0')
                    {
                        a--;
                        if (a >= 1)
                        {
                            s[i] = '0';
                            a -= 1;
                        }
                        else
                        {
                            yes = false;
                        }
                    }
                    else
                    {
                        b--;
                        if (b >= 1)
                        {
                            s[i] = '1';
                            b -= 1;
                        }
                        else
                        {
                            yes = false;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < (n + 1) / 2 && yes; i++)
        {
            if (i == n - 1 - i && s[i] != '?')
            {
                a -= (s[i] == '0');
                b -= (s[i] == '1');
            }
            if (s[i] == '?')
            {
                if (a >= 2)
                {
                    s[i] = s[n - 1 - i] = '0';
                    a -= 2;
                }
                else if (b >= 2)
                {
                    s[i] = s[n - 1 - i] = '1';
                    b -= 2;
                }
                else
                {
                    if (i == n - 1 - i)
                    {
                        if (a >= 1)
                        {
                            s[i] = '0';
                            a--;
                        }
                        else if (b >= 1)
                        {
                            s[i] = '1';
                            b--;
                        }
                        else
                        {
                            yes = false;
                        }
                    }
                    else
                    {
                        yes = false;
                    }
                }
            }
        }
        if (!yes || a != 0 || b != 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << s << '\n';
        }
    }

    return 0;
}
