#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b>=10 || b+c>=10 || c+a>=10)
        {
            cout<<"YES"<<endl;

        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
