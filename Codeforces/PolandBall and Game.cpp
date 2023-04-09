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
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<string> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int k=0;
    forn(n)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            k++;
        }
    }
    if(k%2==1)
    n++;
    if(n<=m)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
