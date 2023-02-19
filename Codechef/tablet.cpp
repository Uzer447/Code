#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, b;
        cin >> n >> b;
        int maxscreen = 0;
        for (int i = 1; i <= n; i++)
        {
            int w, h, p;
            cin >> w >> h >> p;
            int area = w * h;
            if (p <= b)
            {
                maxscreen = max(maxscreen, area);
            }
        }
        if(maxscreen==0)
        cout<<"no tablet"<<endl;
        else
        cout<<maxscreen<<endl;
        t--;
    }
    return 0;
}