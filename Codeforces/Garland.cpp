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
    vi v(n + 2);
    v[0] = 0;
    int ans = 0;
    unordered_map<int, int> mp;
    v[n + 1] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] != 0)
            mp[v[i]] = 1;
    }
    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    stack<int> even;
    stack<int> odd;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 0)
        {
            if (i % 2 == 0)
                even.push(i);
            else
                odd.push(i);
        }
    }
    for(int i=1;i<=n-1;i++)
    {
        if(v[i]!=0 && v[i+1]!=0)
        {
            if(v[i]%2!=v[i+1]%2)
            ans++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            if (v[i - 1] > 0 && v[i + 1] > 0)
            {
                if (v[i - 1] % 2 == v[i + 1] % 2)
                {
                    if (v[i - 1] % 2 == 0 && !even.empty())
                    {
                        v[i] = even.top();
                        even.pop();
                    }
                    else if (v[i - 1] % 2 == 0 && even.empty())
                    {
                        ans += 2;
                        v[i] = odd.top();
                        odd.pop();
                    }
                    else if (v[i - 1] % 2 == 1 && !odd.empty())
                    {
                        v[i] = odd.top();
                        odd.pop();
                    }
                    else if (v[i - 1] % 2 == 1 && odd.empty())
                    {
                        ans += 2;
                        v[i] = even.top();
                        even.pop();
                    }
                }
                else
                {
                    ans += 1;
                    if (!even.empty())
                    {
                        v[i] = even.top();
                        even.pop();
                    }
                    else
                    {
                        v[i] = odd.top();
                        odd.pop();
                    }
                }
            }
            else
            {
                if (v[i - 1] == 0)
                {
                    if (v[i + 1] % 2 == 0 && !even.empty())
                    {
                        v[i] = even.top();
                        even.pop();
                    }
                    else if (v[i + 1] % 2 == 0 && even.empty())
                    {
                        ans++;
                        v[i] = odd.top();
                        odd.pop();
                    }
                    else if (v[i + 1] % 2 == 1 && !odd.empty())
                    {
                        v[i] = odd.top();
                        odd.pop();
                    }
                    else if (v[i + 1] % 2 == 1 && odd.empty())
                    {
                        ans += 1;
                        v[i] = even.top();
                        even.pop();
                    }
                }
                else
                {
                    if (v[i - 1] % 2 == 0 && !even.empty())
                    {
                        v[i] = even.top();
                        even.pop();
                    }
                    else if (v[i - 1] % 2 == 0 && even.empty())
                    {
                        ans++;
                        v[i] = odd.top();
                        odd.pop();
                    }
                    else if (v[i - 1] % 2 == 1 && !odd.empty())
                    {
                        v[i] = odd.top();
                        odd.pop();
                    }
                    else if (v[i - 1] % 2 == 1 && odd.empty())
                    {
                        ans += 1;
                        v[i] = even.top();
                        even.pop();
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
