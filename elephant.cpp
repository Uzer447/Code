#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    int i=5;
    while(n>0 && i>=1)
    {
        if((n-i)>=0)
        {
            n-=i;
            count++;
        }
        else
        {
            i--;
        }
    }
    cout<<count<<endl;
    return 0;
}