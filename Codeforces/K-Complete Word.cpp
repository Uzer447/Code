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
int change(string &s)
{
    int n = s.length(); 
    int cc = 0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]== s[n-i-1]) 
            continue;
        cc+= 1;
            s[i]= s[n-i-1] ;
    }
    return cc;
}
int change1(string &s)
{
    int n = s.length(); 
    int cc = 0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]== s[n-i-1]) 
            continue;
        cc+= 1;
            s[n-i-1]= s[i] ;

    }
    return cc;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i+k<n;i++)
        {
            cout<<s[i]<<" "<<s[i+k]<<endl;
            if(s[i]==s[i+k])
            continue;
            else
            {
                ans++;
                s[i]=s[i+k];
            }
        }
        cout<<s<<endl;
        ans+=change1(s);
        cout<<ans<<endl;
    }

    return 0;
}
