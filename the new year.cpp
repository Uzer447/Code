#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for(int i = 0; i<3;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int ans=abs(v[0]-v[1])+abs(v[1]-v[2]);
    cout << ans << endl;
    return 0;
}