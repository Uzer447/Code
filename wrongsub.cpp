#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>> k;
    while(k>0)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n-=1;
        }
        k--;

        
    }
    cout<< n<<endl;
    return 0;
}