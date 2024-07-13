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
    int n, m;
    cin >> n >> m;
    unordered_map<string, int> mp;
    vector<string> v(n);
    rep(i, n)
    {
        cin >> v[i];
        mp[v[i]] = 1;
    }
    string ans;
    int flag=0;
    for (auto &it : v)
    {
        string temp=it;
        reverse(vall(temp));
        if (mp[temp] == 1)
        {
            if(temp==it)
            {
                if(flag==0)
                {
                    ans.insert((ans.size()/2),it);
                }
                flag=1;
            }
            else
            {
                ans=ans+temp;
                ans.insert(0,it);
            }
            mp[it]=0;
        }
    }
    cout<<ans.size()<<endl;
    cout << ans << endl;
    return 0;
}
