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
        unordered_map<char,int> mp;
        rep(i,n)
        {
            string s;
            cin>>s;
            for(char ch:s)
            {
                mp[ch]++;
            }
        }
        int flag=1;
        for(auto it:mp)
        {
            if(it.second%n!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
