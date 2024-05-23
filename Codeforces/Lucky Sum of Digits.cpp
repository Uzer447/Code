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
    int n;
    cin >> n;
    if (n == 4 || n == 7)
        cout << n << endl;
    else if (n == 11)
        cout << 47 << endl;
    else
    {
        int cnt7 = n / 7;
        for (int i = cnt7; i >= 0; i--)
        {
            int diff = n - (7 * i);
            if (diff % 4 == 0)
            {
                cnt7 = i;
                break;
            }
        }
        // int cnt7=0,cnt4=0;
        // while(n>=7 || n%4!=0)
        // {
        //     cnt7++;
        //     n-=7;
        // }
        n -= cnt7 * 7;
        if (n % 4 != 0)
            cout << -1 << endl;
        else
        {
            int cnt4 = n / 4;
            // cout<<cnt4<<" "<<cnt7<<endl;
            rep(i, cnt4)
                    cout
                << 4;
            rep(i, cnt7)
                    cout
                << 7;
            cout << endl;
        }
    }

    return 0;
}
