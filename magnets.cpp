#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    int count=0;
    while(n>1)
    {
        int k;
        cin>>k;
        if(d!=k)
        {
            count++;
            d=k;
        }
        n--;
    }
    cout<<++count<<endl;
    return 0;
}