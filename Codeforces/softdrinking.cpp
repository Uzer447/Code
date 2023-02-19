#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int reqmili=(k*l)/nl;
    int reqlime=c*d;
    int reqsalt=p/np;
    int ans=min(reqmili,min(reqlime,reqsalt));
    cout<<(ans/n)<<endl;
    return 0;
}