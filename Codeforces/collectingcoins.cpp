#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int m=max(a,max(b,c));
        while(a!=m || b!=m || c!=m && n>0)
        {
            if(a!=m)
            {a+=1;n--;}
            else if(b!=m)
            {b+=1;n--;}
            else
            {c+=1;
            n--;}
        }
            if(n/3!=0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
             t--;
            
        }
        return 0;






       
    }
