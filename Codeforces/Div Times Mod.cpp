#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,k;
    cin>>n>>k;
    int x=INT_MAX;
    for(int i=2;i<k;i++)
    {
        if(n%i==0)
        {int temp=i*((n-i)/k);
        x=min(x,temp);}
    }
    cout<<x<<endl;

    return 0;
}
