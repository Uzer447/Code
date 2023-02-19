#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    int s1;
    cin>>s1;
    int s2;
    cin>>s2;
    if(s1==s2)
    count++;
    int s3;
    cin>>s3;
    if(s1==s3 || s2==s3)
    count++;
    int s4;
    cin>>s4;
    if(s1==s4 || s2==s4 || s3==s4)
    count++;
    cout<<count<<endl;
}