#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n=5;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
    cin>>v[i];
    }
    int sum=accumulate(v.begin(),v.end(),0);
    if(sum%n==0 && sum!=0)
    cout<<sum/n<<endl;
    else
    cout<<-1<<endl;
    

    return 0;
}
