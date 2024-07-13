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
        int lastzero=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                lastzero = i;
                break;
            }
        }
        string ans="";
        for(int i=0;i<=lastzero-1;i++)
        {
            if(s[i]=='1')
            {
                break;
            }
            ans += s[i];
        }
        for(int i=max(0,lastzero);i<n;i++)
        {
            ans += s[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}
