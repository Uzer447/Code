#include <bits/stdc++.h>
using namespace std;

int find(string k, char a)
{
    for (int i = 0; i < k.size(); i++)
    {
        if (k[i] == a)
            return i + 1;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string key, w;
        cin >> key;
        cin >> w;
        int sum=0;
        if (w.size() == 1)
            cout << sum << endl;
        else
        {
            for (int i = 0; i < w.size() - 1; i++)
            {
                int x = find(key, w[i]);
                int y = find(key, w[i + 1]);
                sum = sum + abs(x - y);
            }
        
        cout<<sum<<endl;
        }
    }
}