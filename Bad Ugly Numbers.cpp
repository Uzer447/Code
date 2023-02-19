#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n>=2)
        {
            cout<<"2";
            for(int i=0; i<n-1; i++)
            {
                cout<<"3";
            }
            cout<<endl;
        }
        else 
        cout<<-1<<endl;
    }
    
    return 0;
}