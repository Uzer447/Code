#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    vector<int> initial;
    vector<int> final;
    for(int i=0;i<n;i++)
    {
        char x=s1[i]-'0';
        initial.push_back(x);
    
    
    
        char y=s2[i]-'0';
        final.push_back(y);
    }
    int ans=0;

    for(int i=0;i<n;i++)
    {
       int diff=abs(initial[i]-final[i]);
       if(diff>5)
       {
        int minn=min(initial[i],final[i])+10;
        diff=abs(minn-max(initial[i],final[i]));
       }
       ans+=diff;
    }
    cout<<ans<<"\n";
    return 0;
}