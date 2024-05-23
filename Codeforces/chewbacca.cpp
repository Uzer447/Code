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
    if (s.size() == 1 && s[0] == '9')
    {
        cout << 9 << endl;
    }
    else
    {
        rep(i,s.size())
        {
            if(i==0 && s[i]=='9')
            continue;
            int x=s[i]-'0';
            if(x>=5)
            s[i]=(char)(9-x+48);
        }
        cout<<s<<endl;
    }
    return 0;
}
