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
    unordered_set<double> st;
    int x,y;
    cin>>x>>y;
    forn(n)
    {
        int a,b;
        cin>>a>>b;
        double num=b-y;
        double den=a-x;
        if(den==0)
        {
            st.insert(INT_MAX);
        }
        else
        {
            st.insert(num/den);
        }
    }
    cout<<st.size()<<endl;

    return 0;
}
