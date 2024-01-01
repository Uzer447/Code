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
        string s;
        cin>>s;
        ll sum=0;
        ll cnt=0;
        ll cnt0=0;
        rep(i,s.size())
        {
            ll x=s[i]-'0';
            sum+=x;
            if(x==0)
            cnt0++;
            if(x%2==0)
            cnt++;
        }
        if(cnt0==s.size())
        cout<<"red"<<endl;
        else if(sum%3==0 && cnt0>0 && cnt>=2)
        {
            cout<<"red"<<endl;
        }
        else
        cout<<"cyan"<<endl;
    }

    return 0;
}
