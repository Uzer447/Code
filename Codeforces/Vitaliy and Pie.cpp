#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int buy=0;
    unordered_map<char,int> mp;
    forn(2*n-2)
    {
        if(i%2==0)
        {
            mp[s[i]]++;
        }
        else
        {
            char c=s[i]|' ';
            //cout<<c<<endl;
            if(mp[c]==0)
            buy++;
            else
            mp[c]--;
        }
    }
    cout<<buy<<endl;
    return 0;
}
