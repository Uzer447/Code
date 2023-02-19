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
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        deque<int> dq;
        dq.push_back(v[0]);
        for(int i=1; i<n; i++)
        {
            if(v[i]<dq.front())
            {
                dq.push_front(v[i]);
            }
            else
            {
                dq.push_back(v[i]);
            }
        }
        for(auto i:dq)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}