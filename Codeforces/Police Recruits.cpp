#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int SIZE = 1e6+10;
int main()
{
    int t;
    cin >> t;
    int left=0;
    int cnt=0;
    while (t--)
    {
        int a;
        cin>>a;
        if(a<0)
        {
            if(left>0)
            {
                left--;
            }
            else
            {
                cnt++;
            }
        }
        else
        {
            left+=a;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
