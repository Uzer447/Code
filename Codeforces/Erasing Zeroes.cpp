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
        string s;
        cin>>s;
        int n=s.size();
        int front=-1;
        int back=-1;
        rep(i,n)
        {
            if(s[i]=='1')
            {
                front=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                back=i;
                break;
            }
        }
        int cnt=0;
        if(front==-1)
        cout<<0<<endl;
        else if(back==-1)
        {
            cout<<n-front<<endl;
        }
        else
        {
        for(int i=front+1;i<=back-1;i++)
        {
            if(s[i]=='0')
            cnt++;
        }
        cout<<cnt<<endl;
        }
    }

    return 0;
}
