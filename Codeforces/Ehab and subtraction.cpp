#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,k;
    cin>>n>>k;
    set<int> st;
    st.insert(0);
    rep(i,n)
    {
        int a;
        cin>>a;
        st.insert(a);
    }
    auto it=st.begin();
    rep(i,k)
    {
        if(next(it)==st.end())
        cout<<0<<endl;
        else
        {
            cout<<*next(it)-*it<<endl;
            it=next(it);
        }
    }

    return 0;
}
