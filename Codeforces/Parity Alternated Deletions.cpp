#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> even;
    vector<int> odd;
    int e = 0;
    int o = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        if (a % 2 == 0)
            even.push_back(a);
        else
            odd.push_back(a);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    ll sum=0;
    e = even.size();
    o = odd.size();
    if (abs(e - o) <= 1)
    {
        cout << 0 << endl;
    }
    else
    {
        if (e > o)
        {
            int k = e - o - 1;
            int temp = 0;
            for (int i = 0; i < k; i++)
            {
                temp += even[i];
            }
            sum += temp;
        }
        else if (o > e)
        {
            int k = o - e - 1;
            int temp = 0;
            for (int i = 0; i < k; i++)
            {
                temp += odd[i];
            }
            sum += temp;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
