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
        vi v(n);
        rep(i, n)
                cin >>
            v[i];
        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int ind = -1;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] > v[i + 1])
                {
                    ind = i;
                    break;
                }
            }
            int f = 1;
            vector<int> arr;
            for (int i = ind + 1; i < n; i++)
            {
                arr.push_back(v[i]);
            }
            for (int i = 0; i <= ind; i++)
            {
                arr.push_back(v[i]);
            }
            for (int i = 0; i < n-1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    f = 0;
                    break;
                }   
            }
            if (f == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
