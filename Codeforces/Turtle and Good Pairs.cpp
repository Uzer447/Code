#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
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
        vector<pii> freq;
        rep(i,26)
        {
            freq.pb({0,i});
        }
        rep(i,n)
        {
            freq[s[i]-'a'].first++;
        }
        queue<pii> q;
        sort(freq.begin(),freq.end(),greater<pii>());
        while(freq[0].first > freq[1].first)
        {
            cout<<(char)('a'+freq[0].second);
            freq[0].first--;
        }
        for(int i=0;i<freq.size();i++)
        {
            q.push(freq[i]);
        }
        while(!q.empty())
        {
            pii p=q.front();
            q.pop();
            if(!p.first)
            continue;
            cout<<(char)('a'+p.second);
            --p.first;
            q.push(p);
        }
        cout<<endl;
    }

    return 0;
}
