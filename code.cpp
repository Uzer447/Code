#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        char a;
        cin>>a;
        string s;
        cin>>s;
        vector<int> ind;
        int maxans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(s[i]==a)
            ind.push_back(i);
        }
        for(auto i:ind)
        {
            int ans=0;
            int j=i;
            while(s[j]!='g')
            {
                ans++;
                j++;
                j%=n;
            }
            maxans=max(maxans,ans);
            ans=0;
        }
        cout<<maxans<<endl;
    }

    return 0;
}
