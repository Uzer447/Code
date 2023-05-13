#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int cal(vector<pair<int, int>> &pos, vector<pair<int, int>> &neg)
{
    int n = pos.size();
    int m = neg.size();
    int ans = 0;
    if (n == m)
    {
        for (auto it : pos)
            ans += it.second;
        for (auto it : neg)
            ans += it.second;
    }
    else if(n>m)
    {
        for(auto it : neg)
        ans+=it.second;
        for(int i=0;i<m+1;i++)
        {
            ans+=pos[i].second;
        }
    }
    else if(n<m)
    {
        for(auto it : pos)
        ans+=it.second;
        for(int i=0;i<n+1;i++)
        {
            ans+=neg[i].second;
        }
    }
    return ans;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<pair<int, int>> neg;
    vector<pair<int, int>> pos;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a >= 0)
            pos.push_back({a, b});
        else
            neg.push_back({a, b});
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end(),greater<pair<int,int>>());
    int ans = cal(pos,neg);
    cout << ans << endl;
    return 0;
}
