#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;
    int flag = 0;
    while (a != x && b != y)
    {
        //cout<<a<<" "<<b<<endl;
        if (a == b)
        {
            cout << "YES" << endl;
            flag = 1;
            break;
        }
        a++;
        b--;
        if (a > n)
            a = 1;
        if (b < 1)
            b = n;
    }
    //cout<<a<<" "<<b<<endl;
    if (a == b && flag==0)
    {
        cout << "YES" << endl;
        flag = 1;
    }
    if (flag == 0)
        cout << "NO" << endl;

    return 0;
}