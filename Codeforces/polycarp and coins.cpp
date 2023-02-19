#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        double x=n/3;
        int y=n/3;
        if(x-y>0.5)
        {
            cout<<y<<" "<<int(x+1)<<endl;
        }
        else if(x-y==0)
        {
            cout<<y<<" "<<int(x)<<endl;
        }
        else
        {
            cout<<y+1<<" "<<int(x)<<endl;
        }
    }
    return 0;
}