#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maxscore = INT_MIN;
    string ans = "";
    forn(n)
    {
        string s;
        cin >> s;
        int p, m, a, b, c, d, e;
        cin >> p >> m >> a >> b >> c >> d >> e;
        int score = a + b + c + d + e;
        score += p * 100;
        score -= m * 50;
        if (score > maxscore)
        {
            maxscore = score;
            ans = s;
        }
    }
    cout << ans << endl;
    return 0;
}
