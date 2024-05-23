#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=0;
    int cnt=0;
    int rem=240-k;
    rep(i,n)
    {
        sum+=(i+1)*5;
        if(sum<=rem)
        {
            cnt++;
        }
        else
        break;
    }
    cout<<cnt<<endl;
    return 0;
}
