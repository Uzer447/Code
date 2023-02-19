#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int d1,d2,d3,s1,s2,s3;
        cin>>d1>>d2>>d3;
        cin>>s1>>s2>>s3;
        if((d1+d2+d3)>(s1+s2+s3))
        {
            cout<<"Dragon"<<endl;
        }
        else if((d1+d2+d3)<(s1+s2+s3)){
            cout<<"Sloth"<<endl;
        }
        else if((d1+d2+d3)==(s1+s2+s3))
        {
            if(d1>s1)
            cout<<"Dragon"<<endl;
            else if(s1>d1)
            cout<<"Sloth"<<endl;
            else if(d1==s1)
            {
                if(d2>s2)
                cout<<"Dragon"<<endl;
                else if(s2>d2)
                cout<<"Sloth"<<endl;
            }
        }
        if(d1==s1 && d2==s2 && d3==s3 )
        cout<<"Tie"<<endl;
        t--;
    }
    return 0;
}