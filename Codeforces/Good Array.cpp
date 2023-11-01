#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin>>s;
        int x=s;
        int cnt=0;
        int k=1;
        ll sum=0;
        while(sum<s)
        {
            sum+=k;
            cnt++;
            k+=2;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
