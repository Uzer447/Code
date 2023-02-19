#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    k=5-k;
    int teams=0;
    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        if(a<=k)
        teams++;
    }
    cout<<teams/3<<endl;
    return 0;
}