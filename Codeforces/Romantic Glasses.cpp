#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
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
        ll n;
        cin >> n;
        vll v(n);
        rep(i, n)
                cin >>
            v[i];
        ll oddsum = v[1];
        ll evensum = v[0];
        ll start = 0;
        ll end = 1;
        if(oddsum==evensum)
        {
            end=n;
        }
        while (end < n)
        {
            if (end + 1 < n)
                evensum += v[end + 1];
            if (end + 2 < n)
                oddsum += v[end + 2];
            end += 2;
            if (oddsum == evensum)
            {
                break;
            }
            else
            {
                if (start % 2 == 0 && evensum > oddsum)
                {
                    evensum -= v[start];
                    start++;
                }
                else if (start % 2 == 1 && oddsum > evensum)
                {
                    oddsum -= v[start];
                    start++;
                }
            }
            //cout<<evensum<<" "<<oddsum<<endl;
        }
        if (oddsum == evensum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
