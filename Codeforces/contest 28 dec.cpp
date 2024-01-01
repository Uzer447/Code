#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,char> mp;
        mp['a']='V';
        mp['b']='C';
        mp['c']='C';
        mp['d']='C';
        mp['e']='V';
        vi ind;
        vector<pair<int,int>> v;
        rep(i,n)
        {
            if(mp[s[i]]=='V')
            ind.pb(i);
        }
        for(auto i:ind)
        {
            v.pb({i-1,i+1});
        }
        // for(auto it:v)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        queue<int> q;
        for(int i=0;i<v.size()-1;i++)
        {
            int first=v[i].second;
            int second=v[i+1].first;
            if(first==second)
            {
                q.push(first-1);
            }
            else
            {
                q.push(first);
            }
        }
        rep(i,n)
        {
            cout<<s[i];
            if(i==q.front())
            {
                cout<<'.';
                q.pop();
            }
        }
        cout<<endl;
    }

    return 0;
}
