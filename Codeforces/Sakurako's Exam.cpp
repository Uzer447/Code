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
        int a,b;
        cin>>a>>b;
        if((a+2*b)%2==0)
        {
            b=b%2;
            b-=a/2;
            b=max(0,b);
            a=a%2;
            if(a%2==0 && b%2==0)
            {
                yes;
            }
            else
            {
                no;
            }
        }
        else
        {
            no;
        }
    }

    return 0;
}
