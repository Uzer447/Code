#include<iostream>
using namespace std;

int count(string s)
{
    int c=0;
    for(int i=1;i<s.size()-1;i++)
    {
        c++;
    }
    return c;
}

int main()
{
    int n;
    cin>>n;
    string ans;
    for(int i=0;i<n;i++)
    {
    string s;
    cin>>s;
    if(s.length()>10)
    {
        ans=s[0]+to_string(count(s))+s[s.length()-1];
        
        cout<<ans<<endl;
    }
    else
    cout<<s<<endl;
}
return 0;
    }
    