#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool lefttoright = true;
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
            if (lefttoright)
            {
                for (int i = 1; i < m; i++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
                lefttoright = false;
            }
            else
            {
                cout << "#";
                for (int i = 1; i < m; i++)
                {
                    cout << ".";
                }
                cout << endl;
                lefttoright=true;
            }
        }
        n--;
    }
}