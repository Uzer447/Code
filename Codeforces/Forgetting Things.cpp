#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int da,db;
    cin>>da>>db;
    if(da==db || db==da+1 || (da==9 && db==1))
    {
        if(db-da==1)
        cout<<da<<" "<<db<<endl;
        else if(da==9 && db==1)
        {
            cout<<99<<" "<<100<<endl;
        }
        else
        {
            da=da*10;
            db=db*10+1;
            cout<<da<<" "<<db<<endl;
        }
    }
    else
    {
        cout<<-1<<endl;
    }

    return 0;
}