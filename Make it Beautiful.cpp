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
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
            {
                int a;
                cin >> a;
                st.insert(a);
                v.push_back(a);
            }
        sort(v.begin(), v.end());
        if(st.size()==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            vector<int> ans;
            int left=0;
            int right=n-1;
            bool dir=true;
            while(left<=right)
            {
                if(dir)
                {
                    ans.push_back(v[left]);
                    dir=false;
                    left++;
                }
                else
                {
                    ans.push_back(v[right]);
                    dir=true;
                    right--;
                }
            }
                cout<<"YES"<<endl;
                for(auto i:ans)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
                }
            
        }
    
    return 0;
}