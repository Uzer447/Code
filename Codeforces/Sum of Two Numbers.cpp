#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
bool sumofdigits(int x,int y)
{
    int sumx=0;
    int sumy=0;
    while(x>0)
    {
        sumx+=x%10;
        x/=10;
    }
    while(y>0)
    {
        sumy+=y%10;
        y/=10;
    }
    return abs(sumx-sumy)>1;
}
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
        int x=0;
        int y=0;
        if(n%2==1)
        {
            x=(n/2)+1;
            y=n/2;
            while(sumofdigits(x,y))
            {
                x-=5;
                y+=5;
            }
        }
        else
        {
            x=n/2;
            y=x;
        }
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}
