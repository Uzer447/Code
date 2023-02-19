#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    unordered_map<char,int> mp;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int p;
        cin>>p;
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            sum+=(s[i]-96);
        }
        sort(s.begin(),s.end(),greater<int>());
        while(sum!=p)
        {
            sum-=(s[s.end()-s.size()-1]-96);
            s.erase(s.end()-1);

        }
        cout<<s<<endl;

    }
    
    return 0;
}