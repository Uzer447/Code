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
int smallestSubWithSum(vector<int> arr, int n, int x)
{
    int curr_sum = 0, min_len = n + 1;
    int start = 0, end = 0;
    while (end < n)
    {
        while (curr_sum < x && end < n)
            curr_sum += arr[end++];
        while (curr_sum >= x && start < n)
        {
            if (end - start < min_len)
                min_len = end - start;
            curr_sum -= arr[start++];
        }
    }
    return min_len;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vi v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        set<int> st(vall(v));
        if (st.size() > k)
        {
            cout << -1 << endl;
            continue;
        }
        int x = 0;
        rep(i, k)
        {
            x += v[i];
        }
        string ans = "";
        cout << n * k << endl;
        rep(i,n)
        {
            for(auto it:st)
            {
                cout<<it<<" ";
            }
            for(int j=0;j<(k-st.size());j++)
            {
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
