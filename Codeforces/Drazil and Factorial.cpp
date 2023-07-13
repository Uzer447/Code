#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    vector<string> ch={"","","2","3","322","5","53","7","7222","7332"};
    int n;
    cin>>n;
    string s;
    string ans="";
    cin>>s;
    forn(n)
    {
        ans+=ch[s[i]-'0'];
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

    return 0;
}
