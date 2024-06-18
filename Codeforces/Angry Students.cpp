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
        int maxans=0;
        int curr=0;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A' && flag==0)
            {
                flag=1;
            }
            else if(s[i]=='P' && flag==1)
            {
                curr++;
            }
            else if(s[i]=='A' && flag==1)
            {
                maxans=max(maxans,curr);
                curr=0;
            }
        }
        maxans=max(maxans,curr);
        cout<<maxans<<endl;
    }

    return 0;
}
