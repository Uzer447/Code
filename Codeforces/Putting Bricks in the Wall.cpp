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
        vector<vector<char>> v(n,vector<char>(n,' '));
        rep(i,n)
        {
            string s;
            cin>>s;
            rep(j,n)
            {
                v[i][j]=s[j];
            }
        }
        string a="";
        a=a+v[0][1]+v[1][0];
        string b="";
        b=b+v[n-2][n-1]+v[n-1][n-2];
        //cout<<a<<b<<endl;
        if(a=="00" && b=="00")
        {
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n<<" "<<n-1<<endl;
        }
        else if(a=="00" && b=="01")
        {
            cout<<1<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
        else if(a=="00" && b=="10")
        {
            cout<<1<<endl;
            cout<<n<<" "<<n-1<<endl;
        }
        else if(a=="00" && b=="11")
        {
            cout<<0<<endl;
        }
        else if(a=="01" && b=="00")
        {
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(a=="01" && b=="01")
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<n<<" "<<n-1<<endl;
        }
        else if(a=="01" && b=="10")
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
        else if(a=="01" && b=="11")
        {
            cout<<1<<endl;
            cout<<2<<" "<<1<<endl;
        }
        else if(a=="10" && b=="00")
        {
            cout<<1<<endl;
            cout<<2<<" "<<1<<endl;
        }
        else if(a=="10" && b=="10")
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<n<<" "<<n-1<<endl;
        }
        else if(a=="10" && b=="01")
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
        else if(a=="10" && b=="11")
        {
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(a=="11" && b=="00")
        {
            cout<<0<<endl;
        }
        else if(a=="11" && b=="11")
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<2<<" "<<1<<endl;
        }
        else if(a=="11" && b=="01")
        {
            cout<<1<<endl;
            cout<<n<<" "<<n-1<<endl;
        }
        else if(a=="11" && b=="10")
        {
            cout<<1<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }

    return 0;
}
