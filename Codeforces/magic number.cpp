#include<bits/stdc++.h>
using namespace std;
bool ismagic(string n)
{
    int l=n.length();
    if(n[0]!='1')
    return false;
    int cnt=0;
    for(int i=0;i<l;i++)
    {
        if(n[i]!='4' && n[i]!='1')
        return false;
        else if(n[i]=='4')
        cnt++;
        else if(n[i]!='4')
        {
            if(cnt>=3)
            return false;
            cnt=0;
        }
    }
    if(cnt>=3)
    return false;
    return true;
}

int main()
{
    string n;
    cin>>n;
    if(ismagic(n))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}