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
        int n,x;
        cin>>n>>x;
        set<int> st;
        rep(i,n)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        vi v(vall(st));
        int i=1;
        int j=0;
        while(x>=0)
        {
            if(j>=v.size())
            {
                x--;
                i++;
            }
            else if(v[j]!=i)
            {
                i++;
                x--;
            }
            else
            {
                i++;
                j++;
            }
        }
        cout<<i-2<<endl;
    }

    return 0;
}
