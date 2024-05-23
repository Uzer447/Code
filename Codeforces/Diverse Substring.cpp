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
    string s;
    cin>>s;
    set<char> st(vall(s));
    if(st.size()==1)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
    return 0;
}