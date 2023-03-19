#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            even.push_back(x);
            else 
            odd.push_back(x);
        }
        int flag=1;
        int k=odd.size();
        forn(k-1)
        {
            if(odd[i]>odd[i+1])
            {
                    flag=0;
                    break;
            }
        }
        k=even.size();
        forn(k-1)
        {
            if(even[i]>even[i+1])
            {
                    flag=0;
                    break;
            }
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
