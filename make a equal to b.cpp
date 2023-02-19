#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool issorted(vector<int> &v)
{
    for(int i = 0; i < v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        return false;

    }
    return  true;
}
bool issorteddec(vector<int> &v)
{
    for(int i = 0; i < v.size()-1;i++)
    {
        if(v[i]<v[i+1])
        return false;

    }
    return  true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<int> a;
        vector<int> b;
        int a0=0,a1=0,b1=0,b0=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        int op=0;
        if(!issorted(a) || !issorteddec(a))
        {sort(a.begin(), a.end());
        op+=1;}
        if(!issorted(b) || !issorteddec(b))
        {sort(b.begin(), b.end());
        op+=1;}
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                op++;
            }
        }
        cout<<op<<endl;

    }

    return 0;
}