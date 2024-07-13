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
        vi a(2*n);
        vi even;
        vi odd;
        rep(i,2*n)
        {
            cin>>a[i];
            //cout<<a[i]<<" ";
            if(a[i]%2==0)
            even.pb(i+1);
            else
            odd.pb(i+1);
        }
        // for(auto it:odd)
        // cout<<it<<" ";
        // cout<<endl;
        int cnt=0;
        int x=even.size()/2;
        int i=0;
        while(x--)
        {
            if(cnt>=n-1)
            break;
            cout<<even[i]<<" "<<even[i+1]<<endl;
            cnt++;
            i+=2;
        }
        if(cnt<n-1)
        {
            x=odd.size()/2;
            i=0;
            while(x--)
            {
                if(cnt>=n-1)
                break;
                cout<<odd[i]<<" "<<odd[i+1]<<endl;
                cnt++;
                i+=2;
            }
        }
    }

    return 0;
}
