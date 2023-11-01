#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int left = 0;
        int right = n - 1;
        int prev = 0;
        int cnt = 0;
        int a = 0;
        int b = 0;
        bool turn = true;
        while (left <= right)
        {
            if (turn)
            {
                int curr = 0;
                while (left<=right && curr <= prev)
                {
                    curr += v[left];
                    left++;
                }
                a+=curr;
                prev = curr;
                turn=false;
            }
            else
            {
                int curr = 0;
                while (left<=right && curr <= prev)
                {
                    curr += v[right];
                    right--;
                }
                b+=curr;
                prev = curr;
                turn=true;
            }
            cnt++;
        }
        cout << cnt << " " << a << " " << b << endl;
    }

    return 0;
}
