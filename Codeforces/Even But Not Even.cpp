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
bool isodd(string s,int i)
{
    int last=s[i]-'0';
    return last%2!=0;
}
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
        vi odd;
        int even=-1;
        int oddcnt=0;
        rep(i,n)
        {
            if(isodd(s,i))
            {
                odd.pb(s[i]-'0');
                oddcnt++;
            }
        }
        if(oddcnt<2)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<odd[0]<<odd[1]<<endl;
        }
    }

    return 0;
}
