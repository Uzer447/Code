#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(), s.begin()+n);
    sort(s.begin()+n, s.end());
    int x=s[0]-'0';
    int y=s[n]-'0';
    //cout<<s<<endl;
    bool greater=true;
    int flag=1;
    if(x<y)
    greater=false;
    for(int i=0; i<n; i++)
    {
        x=s[i]-'0';
        y=s[i+n]-'0';
        //cout<<x<<" "<<y<<endl;
        if(x>y!=greater || x==y)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
