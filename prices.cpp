#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
            v.push_back(a);
        }
        double x=(double)sum/n;
        int z=sum/n;
        
        if((x-z)>0)
        z++;

        if(z*n>=sum)
        {
            cout<<z<<endl;
        }

    }
    return 0;
}