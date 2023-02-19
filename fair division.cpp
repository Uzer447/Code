#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count1=0;
        int count2=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
            if(a==1)
            {
                count1++;
            }
            else if(a==2)
            {
                count2++;
            }
        }
        if(count1%2==0 && count2%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(sum%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

}
return 0;
}