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
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int flag=1;
    for(int i=0; i<n; i++)
    {
        if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            if(a[i]=='A' && b[i]!='T')
            {
                flag=0;
                break;
            }
            else if(a[i]=='G' && b[i]!='C')
            {
                flag=0;
                break;
            }
            else if(a[i]=='T' && b[i]!='A')
            {
                flag=0;
                break;
            }
            else if(a[i]=='C' && b[i]!='G')
            {
                flag=0;
                break;
            }
        }
    }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    return 0;
}
