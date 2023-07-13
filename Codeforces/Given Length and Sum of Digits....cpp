#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
#define vall v.begin(),v.end()
using namespace std;

bool can(int m,int s)
{
    return s>=0 && s<=9*m;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int m,s;
    cin>>m>>s;
    if(s==0 && m>1)
    {
        cout<<-1<<" "<<-1<<endl;
    }
    else if(s>m*9)
    {
        cout<<-1<<" "<<-1<<endl;
    }
    else if(m==1 && s==0)
    {
        cout<<0<<" "<<0<<endl;
    }
    else
    {
        string ans="";
        int sum=s;
        for(int i=0;i<m;i++)
        {
            for(int d=0;d<10;d++)
            {
                if((i>0 || d>0 || (m==1 && d==0)) && can(m-i-1,sum-d))
                {
                    ans=ans+to_string(d);
                    sum-=d;
                    break;
                }
            }
        }
        sum=s;
        cout<<ans<<" ";
        ans="";
        for(int i=0;i<m;i++)
        {
            for(int d=9;d>=0;d--)
            {
                if((i>0 || d>0 || (m==1 && d==0)) && can(m-i-1,sum-d))
                {
                    ans=ans+to_string(d);
                    sum-=d;
                    break;
                }
            }
        }
        cout<<ans<<" ";
    }
    return 0;
}
