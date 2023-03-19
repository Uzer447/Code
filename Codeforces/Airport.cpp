#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    priority_queue<int,vector<int>,greater<int>> pqmin;
    priority_queue<int> pqmax;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
        pqmin.push(v[i]);
        pqmax.push(v[i]);
    }
    int minans=0;
    forn(n)
    {
        minans+=pqmin.top();
        int temp=pqmin.top()-1;
        pqmin.pop();
        if(temp>0)
        pqmin.push(temp);
    }
    int maxans=0;
    forn(n)
    {
        maxans+=pqmax.top();
        int temp=pqmax.top()-1;
        pqmax.pop();
        if(temp>0)
        pqmax.push(temp);
    }
    cout<<maxans<<" "<<minans<<endl;
    return 0;
}
