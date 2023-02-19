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
    cin>>n;
    vector<int> v;
    int sum=0;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(sum+a>=4)
        {
            cnt++;
            sum=a;
        }
        else
        {
            sum+=a;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
