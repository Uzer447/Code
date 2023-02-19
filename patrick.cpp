#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ds1,ds2,sh;
    cin>>ds1>>ds2>>sh;
    int ans=0;
    int current=0;
    ans+=min(ds1,ds2);
    if(ans==ds1)
    current=1;
    else current=2;
    int k=ds1+ds2;
    ans+=min(k,sh);

    if(current==1)
    {
        ans+=min(ds2,(sh+ds1));
    }
    else
    ans+=min(ds1,(sh+ds2));

    cout<<ans<<endl;




    return 0;
}