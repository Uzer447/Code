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
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> suf(n+1);
    unordered_set<int> st;
    suf[n]=1;
    st.insert(v[n]);
    for(int i=n;i>=0;i--)
    {
        st.insert(v[i]);
        suf[i]=st.size();
    }
    while(m--)
    {
        int x;
        cin>>x;
        cout<<suf[x]<<endl;
    }

    return 0;
}
