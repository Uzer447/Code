#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    unordered_map<string,string> mp;
    while(n--)
    {
        string name,ip;
        cin>>name>>ip;
        ip=ip+';';
        mp[ip]=name;
    }
    while(m--)
    {
        string nam,ip;
        cin>>nam>>ip;
        cout<<nam<<" "<<ip<<" #"<<mp[ip]<<endl;
    }
    return 0;
}