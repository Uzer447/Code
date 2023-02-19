#include<bits/stdc++.h>
using namespace std;

bool distinctdigits(int x)
{
    vector<int> digits(10,0);
    while(x>0)
    {
        int d=x%10;
        x/=10;
        digits[d]++;
        if(digits[d]>1)
        return false;
    }
    return true;
}
int main()
{
    int y;
    cin>>y;
    while(true)
    {
        y++;
        if(distinctdigits(y))
        {
            cout<<y<<endl;
            break;
        }
    }
    return 0;
}