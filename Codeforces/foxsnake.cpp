#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool lfttoright = true;
    while (n >= 1)
    {
        if (n % 2 != 0)
        {
            for (int i = 1; i <= m; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (lfttoright)
            {
                for (int i = 1; i < m; i++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
                lfttoright = false;
            }
            else
            {
                cout << "#";
                for (int i = 1; i < m; i++)
                {
                    cout << ".";
                }
                cout << endl;
                lfttoright = true;
            }
        }
        n--;
    }
}