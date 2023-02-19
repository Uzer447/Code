#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int h;
    int m;
    cin>>h>>m;
    h=(24-h)*60;
    cout<<(h-m)<<endl;
    t--;

    }
    return 0;
    
}