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
    int n;
    cin>>n;
    vi v(n);
    rep(i,n)
    cin>>v[i];
    set<int> st(vall(v));
    if(st.size()==1)
    cout<<"YES"<<endl;
    else if(st.size()==2)
    cout<<"YES"<<endl;
    else if(st.size()>=4)
    cout<<"NO"<<endl;
    else if(st.size()==3)
    {
        auto it=st.begin();
        int q=*it;
        it++;
        int w=*it;
        it++;
        int e=*it;
        if(2*w==q+e)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
