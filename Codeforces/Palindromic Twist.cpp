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
        int flag=1;
        for(int i=0;i<n/2;i++)
        {
            if(abs(s[i]-s[n-i-1])==0 || abs(s[i]-s[n-i-1])==2)
            {

            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
