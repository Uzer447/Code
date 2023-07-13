#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int upper_bound(vector<int> arr, int N, int X,int prev,int i)
{
    int mid;

    // Initialise starting index and
    // ending index
    int low = i;
    int high = N;

    // Till low is less than high
    while (low < high)
    {
        // Find the middle index
        mid = low + (high - low) / 2;

        // If X is greater than or equal
        // to arr[mid] then find
        // in right subarray
        if (X >= arr[mid]-prev)
        {
            low = mid + 1;
        }

        // If X is less than arr[mid]
        // then find in left subarray
        else
        {
            high = mid;
        }
    }

    // if X is greater than arr[n-1]
    if (low < N && arr[low]-prev <= X)
    {
        low++;
    }

    // Return the upper_bound index
    return low;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int r = 0;
    int sm = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        while (r < n && sm + v[r] <= t) {
            
            //cout<<sm<<endl;
            sm += v[r];
            ++r;
            
        }
        ans = max(ans, r - i);
        sm -= v[i];
    }

    cout << ans << '\n';
    return 0;
}
