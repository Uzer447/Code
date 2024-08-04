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
        string r;
        string b;
        cin >> r >> b;
        // cout<<r<<" "<<b<<endl;
        ll red = 0, blue = 0;
        rep(i, n)
        {
            red += r[i] > b[i];
            blue += b[i] > r[i];
        }
        if (red > blue)
        {
            print("RED");
        }
        else if (red < blue)
        {
            print("BLUE");
        }
        else
        {
            print("EQUAL");
        }
    }

    return 0;
}
