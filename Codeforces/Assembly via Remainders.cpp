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
        vi v(n, 0);
        vi x;
        for (int i = 0; i < n-1; i++)
        {
            int a;
            cin >> a;
            x.push_back(a);
            v[i] = 10000;
        }
        int curr=1;
        for(int i=0;i<x.size();i++)
        {
            v[i+1]=v[i]+x[i];
        }
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}
