#include <bits/stdc++.h>
#define ll long long
using namespace std;
int leftsetbit(int n)
{
    int ans = 1;
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        int x = leftsetbit(n - 1);
        for (int i = 1; i < n; i++)
        {
            if (i == x)
            {
                cout << 0 << " " << x <<" ";
            }
            else
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}