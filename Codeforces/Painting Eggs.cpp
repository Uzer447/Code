#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    string ans;
    int sum = 0;
    forn(n)
    {
        int x, y;
        cin >> x >> y;
        if (sum + x <= 500)
        {
            cout << "A";
            sum += x;
        }
        else
        {
            cout << "G";
            sum -= y;
        }
    }
    cout << endl;
    return 0;
}
