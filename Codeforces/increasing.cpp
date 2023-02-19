#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
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
        sort(v.begin(),v.end());
        int flag=1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>=v[i+1])
            {
                flag=0;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==1)
        cout<<"YES"<<endl;
    }

    return 0;
}