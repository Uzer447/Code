#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maxans=INT_MIN;
    forn(n)
    {
        int lans=0;
        int rans=0;
        for(int j=i; j < n-1; j++)
        {
            if(v[j+1]<=v[j])
            rans++;
            else
            break;
        }
        for(int j=i;j>0;j--)
        {
            if(v[j-1]<=v[j])
            lans++;
            else
            break;
        }
        maxans=max(maxans,lans+rans+1);
    }
    if(n==1)
    maxans=1;
    cout<<maxans<<endl;

    return 0;
}
