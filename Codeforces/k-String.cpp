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
    int k;
    cin >> k;
    string s;
    cin>>s;
    vi v(26,0);
    int n=s.size();
    rep(i,n)
    v[s[i]-'a']++;
    rep(i,26)
    {
        //cout<<v[i]<<endl;
        if(v[i]%k!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    rep(i,k)
    {
        rep(i,26)
        {
            int x=v[i]/k;
            while(x--)
            {
                cout<<(char)(i+97); 
            }
        }
    }
    cout<<endl;

    return 0;
}
