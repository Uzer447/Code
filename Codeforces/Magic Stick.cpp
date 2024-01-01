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
        int x,y;
        cin>>x>>y;
        if(x==1)
        {
            if(y==1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if(x==2)
        {
            if(y==1 || y==2 || y==3)
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
        else if(x==3)
        {
            if(y==1 || y==2 || y==3)
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
