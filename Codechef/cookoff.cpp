#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        bool c,s,e,m,h=0;
        for(int i=1;i<=n;i++)
        {
            string str;
            cin>>str;
            if(str=="cakewalk" && c!=true)
            c=true;
            else if(str=="simple" && s!=true)
            s=true;
            else if(str=="easy" && e!=true)
            e=true;
            else if((str=="easy-medium" || str=="medium") && m!=true)
            m=true;
            else if((str=="medium-hard" || str=="hard") && h!=true)
            h=true;

            
        }

        if(c==true && s==true && e==true && m==true && h==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        t--;
    }
    return 0;
}