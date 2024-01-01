#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int solve(vector<int> &arr, int s, int n)
{
    set<int> st;
    for (int i = s; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int y = st.size();
    return y;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        vi v(n);
        rep(i, n)
                cin >>
            v[i];
        int ans = INT_MAX;
        rep(i,n-d+1)
        {
            set<int> st;
            //cout<<i<<" "<<i+d<<endl;
            for(int j=i;j<i+d;j++)
            {
                //cout<<v[j]<<" ";
                st.insert(v[j]);
            }
            //cout<<endl;
            int y=st.size();
            //cout<<y<<endl;
            ans=min(ans,y);
        }
        cout << ans << endl;
    }

    return 0;
}
