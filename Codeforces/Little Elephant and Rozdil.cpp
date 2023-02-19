#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    int minans=INT_MAX;
    int pos=-1;
    int flag=0;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        if(a<minans)
        {
            minans=a;
            pos=i+1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==minans && pos!=i+1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Still Rozdil"<<endl;
    }
    else
    cout<<pos<<endl;

    return 0;
}