#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 3)
        {
            cout << -1 << endl;
        }
        else
        {
            int temp=0;
            for(int i=n-1; i>=0; i--)
            {
                if(isprime(i))
                {
                    temp=i;
                    break;
                }
            }
            for(int i=1+(n-temp);i<=n;i++)
            cout<<i<<" ";
            for(int i=1;i<=(n-temp);i++)
            cout<<i<<" ";
            cout<<endl;
        }
        
    }

    return 0;
}
