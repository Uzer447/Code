#include<bits/stdc++.h>
using namespace std;
bool isprime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i == 0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=4;i<n;i++)
    {
        if(!isprime(i) && !isprime(n-i))
        {
            cout<<i<<" "<<n-i;
            break;
        }
    }
    cout<<endl;
    return 0;

}