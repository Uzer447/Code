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
    int n;
    cin >> n;
    int even = 0;
    int odd = 0;
    vector<int> v(n);
    int evenans=0, oddans=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            even++;
            evenans=i+1;
        }
        else
        {
            odd++;
            oddans=i+1;
        }
    }
    if (even == 1)
        cout << evenans << endl;
    else
    cout<<oddans << endl;

            return 0;
}
