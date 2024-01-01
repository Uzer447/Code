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
        int i=2;
        string ans="";
        queue<int> q;
        while(i<n-1)
        {   
            if(mp[s[i]]=='C' && mp[s[i+1]]=='V')
            {
                q.push(i);
                i+=2;
            }
            else if(mp[s[i]]=='C' && mp[s[i+1]]=='C')
            {
                q.push(i+1);
                i+=3;
            }
        }
        rep(i,n)
        {
            if(i==q.front())
            {
                cout<<'.';
                q.pop();
            }
            cout<<s[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}
