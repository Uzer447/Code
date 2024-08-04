#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
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
        int px,py;
        cin>>px>>py;
        string s;
        cin>>s;
        int u=0,r=0,d=0,l=0;
        for(auto it:s)
        {
            if(it=='L')
            l++;
            else if(it=='U')
            u++;
            else if(it=='D')
            d++;
            else
            r++;
        }
        if(px>0 && r<px)
        {
            cout<<"NO"<<endl;
        }
        else if(px<0 && l<abs(px))
        {
            no
        }
        else if(py>0 && u<py)
        {
            no
        }
        else if(py<0 && d<abs(py))
        {
            no
        }
        else
        {
            yes
        }
    }

    return 0;
}
