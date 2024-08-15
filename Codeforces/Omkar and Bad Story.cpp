#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
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
        vi v(n);
        int neg=0;
        rep(i,n)
        {
            cin>>v[i];
            if(v[i]<0)
            neg=1;
        }
        if(neg)
        {
            no;
        }
        else
        {
            yes;
            cout<<101<<endl;
            rep(i,101)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        // set<int> st(vall(v));
        // rep(i,n)
        // {
        //     for(int j=i+1; j<n; j++)
        //     {
        //         st.insert(abs(v[j]-v[i]));
        //     }
        // }
        // cout<<st.size()<<endl;
        // for(auto it:st)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
    }

    return 0;
}
