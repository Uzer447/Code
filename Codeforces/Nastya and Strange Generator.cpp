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
        vi v(n);
        unordered_map<int,int> mp;
        rep(i,n)
        {
            cin>>v[i];
            mp[v[i]]=i;
        }
        int flag=1;
        int i=1;
        int j=n-1;
        while(i<=n)
        {
            if(mp[i]>=j || (i<n && mp[i+1]==mp[i]+1))
            {
                i++;
                j--;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
