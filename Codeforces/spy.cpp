#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int count = 2;
        int n;
        cin >> n;
        int a;
        cin >> a;
        while (n > 0)
        {

            int b;
            cin >> b;
            if (b != a)
                count++;
            n--;
        }
        t--;

        cout << count << endl;
    }
    return 0;
}