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
        string n;
        cin>>n;
        ll a=0;
        ll b=0;
        for(int i=0;i<n.size();i++)
        {
            if(i%2==0)
            {
                a=a*10+(n[i]-'0');
            }
            else
            {
                b=b*10+(n[i]-'0');
            }
        }
        cout<<(a+1)*(b+1)-2<<endl;
    }

    return 0;
}
