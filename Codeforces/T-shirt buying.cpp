#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    set<int> q1;
    set<int> q2;
    set<int> q3;
    vector<int> p(n);
    for(int i=0;i<n;i++)
    {
    cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            q1.insert(p[i]);
        }
        else if(a==2)
        {
            q2.insert(p[i]);
        }
        else
        {
            q3.insert(p[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            q1.insert(p[i]);
        }
        else if(a==2)
        {
            q2.insert(p[i]);
        }
        else
        {
            q3.insert(p[i]);
        }
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        if(x==1 && q1.size()==0)
        {
            cout<<-1<<" ";
        }
        else if(x==2 && q2.size()==0)
        {
            cout<<-1<<" ";
        }
        else if(x==3 && q3.size()==0)
        {
            cout<<-1<<" ";
        }
        else if(x==1)
        {
            int ans=*(q1.begin());
            cout<<*(q1.begin())<<" ";
            q1.erase(ans);
            q2.erase(ans);
            q3.erase(ans);
        }
        else if(x==2)
        {
            int ans=*(q2.begin());
            cout<<ans<<" ";
            q1.erase(ans);
            q2.erase(ans);
            q3.erase(ans);
        }
        else if(x==3)
        {
            int ans=*(q3.begin());
            cout<<ans<<" ";
            q1.erase(ans);
            q2.erase(ans);
            q3.erase(ans);
        }
    }
    return 0;
}
