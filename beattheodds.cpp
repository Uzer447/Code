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
        vector<long long> v;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            v.push_back(a);
        }
        int remove=0;
        for(int i=0;i<n-1;i++)
        {
            if((v[i]+v[i+1])%2==1 && (v[i+1]+v[i+2])%2==0)
            {
                remove++;
            }

        }
        cout<<remove<<endl;
    }
    return 0;
}