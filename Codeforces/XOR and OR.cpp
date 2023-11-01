#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int aone=0;
    int bone=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='1')
        aone=1;
    }
    forn(b.size())
    {
        if(b[i]=='1')
        bone=1;
    }
    if(aone!=bone)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;

    return 0;
}
