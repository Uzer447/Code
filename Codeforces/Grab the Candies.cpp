#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
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
        vector<int> v(n);
        int even=0;
        int odd=0;
        for(int i=0;i<n;i++)
        {
        cin>>v[i];
        if(v[i]%2==0)
        even+=v[i];
        else
        odd+=v[i];
        }
        if(even>odd)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
