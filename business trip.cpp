#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    if(k == 0)
    cout<<k<<endl;
    else
    {
        vector<int> v;
        for(int i=0;i<12;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int i=11;
        int cnt=0;
        while(k>0 && i>=0)
        {
            cnt++;
            k-=v[i];
            i--;
        }
        if(k<=0)
        cout<<cnt<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}