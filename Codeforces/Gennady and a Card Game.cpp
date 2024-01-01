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
    rep(i,5)
    {
        string x;
        cin>>x;
        if(s[0]==x[0] || s[1]==x[1])
        {
            cnt++;
        }
    }
    if(cnt>0)cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;

    return 0;
}
