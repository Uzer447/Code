#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long even=0;
    long long odd=0;    
    if(n%2==1)
    {
        odd=n/2+1;
        even=n/2;
    }
    else
    {
        odd=n/2;
        even=n/2;
        }
        even=even*(even+1);
        odd=odd*odd;
        cout<<even-odd<<endl;
        return 0;
}