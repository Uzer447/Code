#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    string s1,s2,a;
    cin>>s1>>s2>>a;
    string b=s1+s2;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}