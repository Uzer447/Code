#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    pair<string,string> p;
    string a;
    cin>>a;
    string b;
    cin>>b;
    int n;
    cin>>n;
    p={a,b};
    cout<<a<<" "<<b<<endl;
    while(n--)
    {
        string c,y;
        cin>>c>>y;
        if(c==p.first)
        {
            p.first=y;
        }
        else if(c==p.second)
        {
            p.second=y;
        }
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}