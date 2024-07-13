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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(vall(s));
        if(s[0]!=s[k-1])
        {
            cout<<s[k-1]<<endl;
            continue;
        }
        cout<<s[0];
        if(s[k]==s[n-1])
        {
            for(int i=0;i<(n-k+k-1)/k;i++)
            {
                cout<<s[n-1];
            }
        }
        else
        {
            for(int i=k;i<n;i++)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
