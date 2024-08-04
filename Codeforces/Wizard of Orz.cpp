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
        string s="989";
        if(n==1)
        cout<<9<<endl;
        else if(n==2)
        cout<<98<<endl;
        else if(n==3)
        cout<<989<<endl;
        else
        {
            cout<<s;
            for(int i=3;i<n;i++)
            {
                cout<<(i-3)%10;
            }
            cout<<endl;
        }
    }


    return 0;
}
