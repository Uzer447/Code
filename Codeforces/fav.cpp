#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int left=0;
        int right=n-1;
       
        
        while(left<right)
        {

            cout<<v[left++]<<" ";
            //left++;
            cout<<v[right--]<<" ";
            //right++;

        }
        if(n%2==1)
        cout<<v[left];
        cout<<endl;
    }
    return 0;
}