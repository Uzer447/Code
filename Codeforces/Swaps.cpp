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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
        vector<int> b(n);
        for(int i=0;i<n;i++)
        {
        cin>>b[i];
        }
        int k=b[0];
        int ind=-1;
        forn(n)
        {
            if(a[i]<k)
            {
                ind=i;
                break;
            }
        }
        cout<<ind<<endl;
    }

    return 0;
}
