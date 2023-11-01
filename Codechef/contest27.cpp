#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
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
        ll cnt=0;
        int i=2;
        ll temp=(n-1)/2;
        while(temp--)
        {
            int a=s[i-2]-'0';
            int b=s[i-1]-'0';
            int c=s[i]-'0';
            int x=a==b?0:1;
            //cout<<x<<" "<<c<<endl;
            int flag=0;
            if(x==c)
            {
                cnt++;
                //cout<<"done^";
                flag=1;
            }
            if(a+b==c)
            {
                cnt++;
                //cout<<"done+";
                flag=1;
            }
            if(a*b==c)
            {
                cnt++;
                //cout<<"done&";
                flag=1;
            }
            if(flag==0)
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
