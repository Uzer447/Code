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
        int k;
        cin>>k;
        int a=1;
        int x=1;
        int i=1;
        while(k>=x+a)
        {
            x+=a;
            a+=2;
            i+=1;
        }
        int m=k-x+1;
        if(m<=i)
        {
            cout<<m<<' '<<i<<endl;
        }
        else
        {
            cout<<i<<' '<<(i-(m-i))<<endl;
        }
    }

    return 0;
}