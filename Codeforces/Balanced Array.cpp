#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
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
        int x=n/2;
        if(x%2==1)
        cout<<"NO"<<endl;
        else
        {
            int evensum=x*(x+1);
            int oddsum=x*x;
            if(evensum<oddsum)
            {
                cout<<"NO"<<endl;
                continue;
            }
            int diff=evensum-oddsum;
            if(diff%2==1)
            {
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
            int k=2;
            int i=0;
            while(i<x)
            {
                cout<<k<<" ";
                k+=2;
                i++;
            }
            i=1;
            k=1;
            while(i<x)
            {
                cout<<k<<" ";
                k+=2;
                i++;
            }
            cout<<k+diff<<endl;
        }
    }

    return 0;
}
