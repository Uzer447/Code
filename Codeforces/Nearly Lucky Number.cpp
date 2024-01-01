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
    string s;
    cin>>s;
    int cnt=0;
    rep(i,s.size())
    {
        if(s[i]=='4' || s[i]=='7')
        cnt++;
    }
    if(cnt==4 || cnt==7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
