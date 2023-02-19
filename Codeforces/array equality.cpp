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
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        
        bool ans=false;
        sort(v.begin(),v.end());




        while(next_permutation(v.begin(),v.end()))
        {
            for(int i=1;i<n;i++)
            {
                
                if(v[i]==v[i-1])
                {
                    ans=false;
                    break;
                }
                else
                ans=true;
            }
            if(ans==true)
            break;
           
        }
        if(ans)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}