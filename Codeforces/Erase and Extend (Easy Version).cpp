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
string getstr(string s,int k)
{
    //cout<<s<<endl;
    while(s.size()<k)
    {
        s=s+s;
    }
    while(s.size()>k)
    s.pop_back();
    return s;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    //cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string pref="";
        pref=pref+s[0];
        string mn=getstr(pref,k);
        for(int i=1;i<n;i++)
        {
            if(s[i]>s[0])break;
            pref+=s[i];
            mn=min(mn,getstr(pref,k));
        }
        cout<<mn<<endl;
    }

    return 0;
}
