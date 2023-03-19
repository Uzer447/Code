#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
bool contains8(int n)
{
    n=abs(n);
    while(n>0)
    {
        if(n%10==8)
        return true;
        n/=10;
    }
    return false;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a;
    cin>>a;
    int temp=a;
    a++;
    while(!contains8(a))
    {
        a++;
    }
    cout<<a-temp<<endl;
    return 0;
}
