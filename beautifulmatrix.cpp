#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    int j=1;
    for(int k=1;k<=25;k++)
    {
        int a;
        cin>>a;
        //cout<<i<<" "<<j<<" "<<endl;
        if(a==1)
        {
            cout<<abs(3-i)+abs(3-j)<<endl;
            break;
        }
        j++;
        if(j>5)
        j=1;
        if(k%5==0)
        {
            i++;
        }
    }
    return 0;
}