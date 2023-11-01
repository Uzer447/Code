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
vector<pii> findSubsets(vector<int> &nums, int n)
{
    vector<pii> v;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum=0;
        int cnt=0;
        for (int j = 0; j < n; j++)
        {
            
            if ((i & (1 << j)) != 0)
            {
                sum+=nums[j];
                cnt++;
            }
            
            v.push_back({sum,cnt});
        }
    }
    return v;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> v = {a, b, c};
    vector<pii> ans=findSubsets(v, 3);
    int cnt=0;
    for(auto i:ans)
    {
        if(i.first==n)
        {
            cnt=max(cnt,i.second);
        }
    }
    cout<<cnt<<endl;

    return 0;
}
