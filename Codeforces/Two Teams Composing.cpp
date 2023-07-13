#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
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
        unordered_map<int,int> mp;
        forn(n)
        {
        	int a;
        	cin>>a;
        	mp[a]++;
        	st.insert(a);
        }
        int maxele=INT_MIN;
        int ind=-1;
        int i=0;
        for(auto it:mp)
        {
        		maxele=max(maxele,it.second);
        }
        if(st.size()==maxele)
        {
        	cout<<st.size()-1<<endl;
        }
        else
        {
        	int x=st.size();
        	cout<<min(x,maxele)<<endl;
        }
    }

    return 0;
}
