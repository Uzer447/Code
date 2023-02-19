#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    unordered_set<int> st;
    int maxele=INT_MIN;
    while (n--)
    {
        int a;
        cin>>a;
        mp[a]++;
        st.insert(a);
    }
    for(auto it : mp)
    {
        maxele=max(maxele,it.second);
    }
    cout<<maxele<<" "<<st.size()<<endl;
    return 0;
}

