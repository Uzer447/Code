#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int sumofdigits(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int maxans=0;
    for(int i=1;i<=n/2;i++)
    {
        int sum=sumofdigits(i)+sumofdigits(n-i);
        maxans=max(ans,sum);
    }
    cout<<maxans<<endl;
    return 0;
}
