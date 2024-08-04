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
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        map<int, int> mp;
        rep(i, n)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(vall(v));
        set<int> st(vall(v));
        vi temp(vall(st));
        vi a;
        a.pb(temp[0]);
        mp[temp[0]]--;
        for (int i = 1; i < temp.size(); i++)
        {
            if (temp[i] - temp[i - 1] == 1)
            {
                a.pb(temp[i]);
                mp[temp[i]]--;
            }
            else
                break;
        }
        //cout << a.size() << endl;
        vi b;
        for (auto it : mp)
        {
            if(it.second>0)
            b.pb(it.first);
        }
        int ans=0;
        //cout << b.size() << endl;
        sort(vall(a));
        sort(vall(b));
        int flag=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=i)
            {
                ans+=i;
                flag=1;
                break;
            }
        }
        if(flag==0)
        ans+=a.size();
        flag=0;
        for(int i=0;i<b.size();i++)
        {
            if(b[i]!=i)
            {
                ans+=i;
                flag=1;
                break;
            }
        }
        if(flag==0)
        ans+=b.size();
        cout<<ans<<endl;
    }
    return 0;
}
