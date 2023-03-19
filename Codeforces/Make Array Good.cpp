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
        int minele=INT_MAX;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            minele=min(minele,v[i]);
        }
        cout<<n<<endl;
        forn(n)
        {
            int steps=0;
            if(v[i]%minele==0)
            {
                steps=0;
            }
            else
            {
                steps=minele-v[i]%minele;
            }
            cout<<i+1<<" "<<steps<<endl;
        }

    }

    return 0;
}
