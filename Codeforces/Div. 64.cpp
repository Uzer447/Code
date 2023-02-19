#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    int flag=0;
    for(int i=s.size()-1; i>=0; i--)
    {
        if(cnt>=6 && s[i]=='1')
        {
            flag=1;
            break;
        }
        if(s[i]=='0')
        cnt++;
    }
    if(cnt>=6 && flag==1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}