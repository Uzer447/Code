#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int d=x%10;
        int ans=(d-1)*10;
        int count=0;
        while(x>0)
        {
            count++;
            x/=10;
        }
        count=(count*count+count)/2;
       
        cout<<ans+count<<endl;
    }
    return 0;
}