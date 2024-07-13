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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        set<int> st;
        int k=0;
        rep(i,n)
        {
            int x;
            cin>>x;
            k=max(k,x);
            st.insert(x);
        }
        int ans=-1;
        for(int i=1;i<=1023;i++)
        {
            set<int> newst;
            for(auto it:st)
            {
                newst.insert(it^i);
            }
            if(st==newst)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
