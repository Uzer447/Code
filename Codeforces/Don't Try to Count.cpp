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
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int ind;
        rep(i,10)
        {
            ind=isSubstring(s,x);
            if(ind!=-1)
            {
                cout<<i<<endl;
                break;
            }
            x=x+x;
        }
        if(ind==-1)
        cout<<-1<<endl;
    }
    return 0;
}
