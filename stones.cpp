#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int i=0;
    while(i<s.size()-1)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    return 0;
}