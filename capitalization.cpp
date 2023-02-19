#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str[0]>='a' && str[0]<='z')
    {cout<<(char)(str[0]-32);cout<<(str.substr(1))<<endl;}
    else
    cout<<str<<endl;
    return 0;
}