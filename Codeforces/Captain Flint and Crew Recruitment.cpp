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
        if(n<=30)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(n-30 == 6)
            {
                cout<<"6 10 15 "<<n-31<<endl;
            }
            else if(n-30==10)
            {
                cout<<"6 10 15 "<<n-31<<endl;
            }
            else if(n-30==14)
            {
                cout<<"6 10 15 "<<n-31<<endl;
            }
            else
            {
                cout<<"6 10 14 "<<n-30<<endl;
            }
        }
    }

    return 0;
}
