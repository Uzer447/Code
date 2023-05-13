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
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        int prevpla=0;
        int prevclear=0;
        int flag=0;
        for(auto it:v)
        {
            if(it.first<prevpla || it.second<prevclear || it.second-prevclear>it.first-prevpla)
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            prevpla=it.first;
            prevclear=it.second;
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
