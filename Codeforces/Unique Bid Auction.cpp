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
        unordered_map<int, int> freq;
        unordered_map<int,int> ind;
        rep(i,n)
        {
            int x;
            cin>>x;
            ind[x]=i+1;
            freq[x]++;
        }
        int ans=INT_MAX;
        int k=-1;
        for(auto it:freq)
        {
            if(it.second==1 && ans>it.first)
            {
                ans=min(ans,it.first);
                k=ind[it.first];
            }
        }
        cout<<k<<endl;
    }

    return 0;
}
