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
        string s;
        cin>>s;
        string a=s;
        string b=s;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='2' && flag==0)
            {
                a[i]='1';
                b[i]='1';
            }
            else if(s[i]=='2' && flag==1)
            {
                a[i]='2';
                b[i]='0';
            }
            else if(s[i]=='1' && flag==0)
            {
                flag=1;
                a[i]='0';
                b[i]='1';
            }
            else if(s[i]=='1' && flag==1)
            {
                a[i]='1';
                b[i]='0';
            }
            else
            {
                a[i]='0';
                b[i]='0';
            }
        }
        cout<<a<<"\n"<<b<<endl;
    }

    return 0;
}
