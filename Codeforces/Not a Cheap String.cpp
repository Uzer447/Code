#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int p;
        cin>>p;
        int sum=0;
        priority_queue<int> pq;
        for(int i=0;i<s.length();i++)
        {
            sum+=(s[i]-96);
            pq.push(s[i]-96);
        }
        vector<int> mp(26);
        while(sum>p)
        {
            sum-=pq.top();
            char c=(char)pq.top()+96;
            mp[c-'a']++;
            pq.pop();
            //cout<<sum<<endl;
        }
        rep(i,s.size())
        {
            if(mp[s[i]-'a']==0)
                cout<<s[i];
            else
            mp[s[i]-'a']--;
        }
        cout<<endl;
    }
    
    return 0;
}