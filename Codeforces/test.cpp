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
ll clearBit(ll n, ll k)
{
    return (n & (~(1 << (k))));
}
bool isKthBitSet(ll n, ll k)
{
    if ((n >> k) & 1)
        return true;
    else
        return false;
}
ll setBitNumber(ll n)
{
    ll ans = 1;
    while (n)
    {
        ans *= 2;
        n /= 2;
    }
    ans /= 2;
    return ans;
}
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
        if (n == 1)
        {
            cout << 1 << endl;
            cout << 1 << endl;
        }
        else if (n == 3)
        {
            cout << "3\n1 2 3" << endl;
        }
        else if (__builtin_popcountll(n) == 1)
        {
            cout << 1 << endl;
            cout << n << endl;
        }
        else
        {
            set<ll> st;
            for (ll i = 62; i >= 0; i--)
            {
                if (isKthBitSet(n, i))
                {
                    ll x = (1LL << i);
                    st.insert(n-x);
                }
            }
            st.insert(n);
            cout << st.size() << endl;
            for (auto &it : st)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
