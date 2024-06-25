#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
char diff(char x,char y)
{
    if(x==y)
    return y;
    if((x=='S' && y=='T') || (x=='T' && y=='S'))
    return 'E';
    else if((x=='T' && y=='E') || (x=='E' && y=='T'))
    return 'S';
    else
    return 'T';
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,k;
    cin>>n>>k;
    vector<string> v(n);
    rep(i,n)cin>>v[i];
    int ans=0;
    set<string> st;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string temp;
            for(int f=0;f<k;f++)
            {
                char x=diff(v[i][f],v[j][f]);
                temp+=x;
            }
            if(st.count(temp))
            {
                ans++;
            }
        }
        st.insert(v[i]);
    }
    cout<<ans<<endl;
    return 0;
}
