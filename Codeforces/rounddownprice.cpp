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
        int m=stoi(s);
        int i=0;
        int d=0;
        while(true)
        {
            if(pow(10,i)>m)
            {
                i--;
                d=pow(10,i);
                break;
            }
            i++;
        }
        int ans=m-d;
        cout<<ans<<endl;
    }
    return 0;
}