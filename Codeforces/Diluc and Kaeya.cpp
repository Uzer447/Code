#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
pii getratio(int a,int b)
{
    int g=__gcd(a,b);
    a/=g;
    b/=g;
    return {a,b};
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
        map<pii,int> mp;
        int d=0;
        int k=0;
        rep(i,n)
        {
            if(s[i]=='D')
            d++;
            else
            k++;
            mp[getratio(d,k)]++;
            cout<<mp[getratio(d,k)]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
