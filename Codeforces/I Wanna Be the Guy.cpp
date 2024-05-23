#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vi v(n + 1, 0);
    int p;
    cin >> p;
    while (p--)
    {
        int x;
        cin >> x;
        v[x] = 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        v[x] = 1;
    }
    int flag = 1;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}
