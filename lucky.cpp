#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sum1=0,sum2=0;
        for(int i=0;i<s.size();i++)
        {
            if(i<=2)
            {
                int x=s[i]-'0';
                sum1+=x;
            }
            if(i>2)
            {
                int x=s[i]-'0';
                sum2+=x;
            }
        }
        if(sum1==sum2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}