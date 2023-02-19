#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
       
        int index=0;
        int count=0;
        int flag=0;
        string ans;
        int kt=0;
        for(int i=0;i<n;i++)
        {
            index=ans.find(s[i]);
            if(index!=-1)
            {
                flag=1; kt=1;
                cout<<"NO"<<endl;
                break;
            }
            
            if((s[i]=='T' || s[i]=='i' || s[i]=='m' || s[i]=='u' || s[i]=='r') && index==-1)
            {
                count++;
               
            }
             ans+=s[i];
        }
        if(count==5 && kt==0)
        cout<<"YES"<<endl;
        else if(flag==0)
        cout<<"NO"<<endl;
       
    }
    return 0;
}