#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> peaks(n);
        peaks[0]=0;
        for(int i=1;i<n-1;i++)
        {
            if(v[i]>v[i+1]&& v[i]>v[i-1])
            {
                peaks[i+1]=peaks[i]+1;
            }
            else
            peaks[i+1]=peaks[i];
        }
        int l=0;
        int ans=peaks[k-1]-peaks[l];
        int pos=l;
        while(l+k-1<n)
        {
            if(peaks[l+k-1]-peaks[l]>ans)
            {
                ans=peaks[l+k-1]-peaks[l];
                pos=l;
            }
            l++;
        }
        cout<<++ans<<" "<<++pos<<endl;
    }

    return 0;
}
