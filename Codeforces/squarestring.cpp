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
        if(s.size()%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int mid=s.size()/2;
            int i=0;
            int flag=0;
            while(mid!=s.size() && i<mid )
            {
                if(s[mid]!=s[i])
                {
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
                i++;
                mid++;
            }
            if(flag==0)
            cout<<"YES"<<endl;
        }
    }
    return 0;
}