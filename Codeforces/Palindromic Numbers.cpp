#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
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
        ll ans=0;
        for(int i=0;i<n/2;i++)
        {
            int fd=s[i]-'0';
            int ld=s[n-1-i]-'0';
            if(fd>ld)
            {
                int diff=fd-ld;
                cout<<diff<<endl;
                ans=ans*10 + diff;
            }
            else if(fd<ld)
            {
                int diff=ld-fd;
                cout<<diff<<endl;
                ans=ans*10 + diff;

            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
