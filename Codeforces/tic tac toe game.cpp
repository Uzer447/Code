#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[4][4 + 1];
    // cells are '.', 'o', 'x'
    for (int i = 0; i < 4; i++)
    {
        cin >> str[i];
    }

    auto check = [&]()
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int dx = -1; dx <= 1; dx++)
                {
                    for (int dy = -1; dy <= 1; dy++)
                    {
                        if (dx == 0 && dy == 0)
                            continue;
                        if (i + dx * 3 > 4 || j + dy * 3 > 4 || i + dx * 3 < -1 || j + dy * 3 < -1)
                            continue;
                        bool ok = true;
                        for (int p = 0; p < 3; p++)
                        {
                            ok &= str[i + p * dx][j + p * dy] == 'x';
                        }
                        if (ok)
                            return true;
                    }
                }
            }
        }
        return false;
    };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (str[i][j] == '.')
            {
                str[i][j] = 'x';
                if (check())
                {
                    puts("YES");
                    exit(0);
                }
                str[i][j] = '.';
            }
        }
    }
    puts("NO");
}