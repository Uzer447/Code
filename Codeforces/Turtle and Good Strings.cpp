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
        string s;
        cin>>s;
        int l=0;
        int flag=0;
        int r=n-1;
        // while(l<r)
        // {
        //     if(s[l]!=s[r])
        //     {
        //         flag=1;
        //         break;
        //     }
        //     r--;
        // }
        if(s[l]!=s[r])
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}
