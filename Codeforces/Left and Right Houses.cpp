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
        string s;
        cin>>s;
        vector<int> left(n+2);
        left[0]=0;
        vector<int> right(n+2);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                left[i+1]=left[i]+1;
            }
            else
            {
                left[i+1]=left[i];
            }
        }
        left[n+1]=left[n];
        right[n+1]=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                right[i+1]=right[i+2]+1;
            }
            else
            {
                right[i+1]=right[i+2];
            }
        }
        right[0]=right[1];
        for(int i=0;i<=n;i++)
        {
            int l=i;
            int r=n-l;
            int leftzero=max(0,l-left[i]);
            int rightone=max(0,right[i+1]);
            int leftreq=(l+1)/2;
            int rightreq=(r+1)/2;
            cout<<leftreq<<" "<<rightreq<<endl;
            if(leftzero==leftreq && rightone==rightreq)
            {
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
}
