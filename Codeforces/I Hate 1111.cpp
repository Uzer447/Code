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
bool func(int x)
{
    if(x<0)
    {
        return 0;
    }
    if(x%11==0)
    {
        return 1;
    }
    x-=111;
    return func(x);
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin>>x;
        if(func(x))
        {
            yes;
        }
        else
        {
            no;
        }
        // if(x%11==0)
        // {
        //     yes;
        //     continue;   
        // }
        // x=x%111111111;
        // x=x%11111111;
        // x=x%1111111;
        // x=x%111111;
        // x=x%11111;
        // x=x%1111;
        // x=x%111;
        // x=x%11;
        // if(x==0)
        // {
        //     yes;
        // }
        // else
        // {
        //     no;
        // }
    }

    return 0;
}
