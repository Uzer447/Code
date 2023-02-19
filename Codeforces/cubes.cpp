#include<iostream>
using namespace std;
int sum(int a)
{
    a=(a*(a+1))/2;
    return a;
}


int main()
{
    int n;
    cin>>n;
    int i=1;
   
    while((n-sum(i))>0)
    {
        n-=sum(i);
        i++;
        
    }
    cout<<(i-1)<<endl;
    
    return 0;
}