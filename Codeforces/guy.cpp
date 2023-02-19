#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    vector<int> ans(n+1,1);
    vector<int> x;
    vector<int> y;
    for(int i=0;i<p;i++)
    {
        int a;
        cin>>a;
        if(a<ans.size())
        ans[a]=0;
    }
    for(int i=1;i<p;i++)
    {
        
        if(ans[i]!=0 && a<ans.size())
        ans[a]=0;
    }
}