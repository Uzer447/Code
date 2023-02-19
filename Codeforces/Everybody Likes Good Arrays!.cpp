#include <bits/stdc++.h>
#define ll long long 
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
        for (int i = 0; i < n; i++)
        {
                int a;
                cin >> a;
                v.push_back(a);
        }
        int cnt=0;
        for(int i = 0; i < n-1; i++)
        {
            if(v[i]%2==0 && v[i+1]%2==0)
            cnt++;
            else if(v[i]%2==1 && v[i+1]%2==1)
            cnt++;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}