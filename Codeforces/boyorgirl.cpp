#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    vector<int>v(26,0);
    for(int i=0;i<n;i++)
    {
        v[s[i]-'a']++;
    }
    int sum=0;
    for(int i=0;i<26;i++)
    {
        if(v[i]==1)sum++;
        else if(v[i]>1)sum++;
    }
    if(sum%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;

}