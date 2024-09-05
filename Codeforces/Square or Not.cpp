#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define print(X) cout<<X<<endl;
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
        string s;
        cin>>s;
        int x=sqrt(n);
        if(x*x==n)
        {
            int flag=1;
            rep(i,n)
            {
                int row=i/x;
                int col=i%x;
                if(row==0 || row==x-1 || col==0 || col==x-1)
                {
                    if(s[i]!='1')
                    {
                        flag=0;
                        break;
                    }
                }
                else
                {
                    if(s[i]!='0')
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag)
            {
                yes;
            }
            else
            {
                no;
            }
        }
        else
        {
            no;
        }
    }

    return 0;
}
