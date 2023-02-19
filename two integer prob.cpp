#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        double diff=abs(a-b);
        cout<<(int)ceil(diff/10)<<endl;

    }
    return 0;

}