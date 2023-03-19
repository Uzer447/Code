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
        int tc=0;
        int tm=0;
        int flag=1;
        forn(n)
        {
            if(s[i]=='T')
            tc++;
            else
            tm++;
            if(tc<tm)
            {
                flag=0;
                break;
            }
        }
        if(s[0]=='M' || s[n-1]=='M')
        {
            cout<<"NO"<<endl;
        }
        else if(tc!=2*tm && flag==1)
        {
            cout<<"NO"<<endl;
        }
        else if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
