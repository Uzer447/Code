#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define ll long long
#define pb push_back
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int a=0;
        int b=0;
        for(auto it:s)
        {
            if(it=='A')a++;
            else
            b++;
        }
        if(a>b)
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;
    }

    return 0;
}
