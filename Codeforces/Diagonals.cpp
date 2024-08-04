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
        int n,k;
        cin>>n>>k;
        if(k==0)
        {
            cout<<0<<endl;
            continue;
        }
        int cnt=0;
        int x=n;
        k-=x;
        cnt++;
        if(k<=0)
        {
            cout<<cnt<<endl;
            continue;
        }
        x--;
        while(k>0)
        {
            k-=x;
            cnt++;
            if(k<=0)
            {
                cout<<cnt<<endl;
                break;
            }
            k-=x;
            cnt++;
            if(k<=0)
            {
                cout<<cnt<<endl;
                break;
            }
            x--;
        }
        //cout<<cnt<<endl;
    }

    return 0;
}
