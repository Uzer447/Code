#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    if(s=="0")
    {
        cout << 0 << endl;
        return 0;
    }
    int cnt=0;
    rep(i,s.size())
    {
        if(s[i]=='1')
        cnt++;
    }
    if(cnt==1)
    {
        int x=s.size()-1;
        x/=2;
        if((s.size()-1)%2==1)
        x++;
        cout<<x<<endl;
    }
    else
    {
        int x=s.size();
        x/=2;
        if((s.size())%2==1)
        x++;
        cout<<x<<endl;
    }
    return 0;
}
