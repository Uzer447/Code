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
        string s;
        cin>>s;
        int n=s.size();
        int x1=n-1;
        int ans1=0;
        int x2=n-1;
        int ans2=0;
        while(x1>=0 && s[x1]!='0')
        {
            x1--;
            ans1++;
        }
        while(x2>=0 && s[x2]!='5')
        {
            x2--;
            ans2++;
        }
        int y1=x1-1;
        while(y1>=0 && s[y1]!='0' && s[y1]!='5')
        {
            y1--;
            ans1++;
        }
        int y2=x2-1;
        while(y2>=0 && s[y2]!='2' && s[y2]!='7')
        {
            y2--;
            ans2++;
        }
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}
