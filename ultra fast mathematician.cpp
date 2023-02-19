#include <bits/stdc++.h>
using namespace std;
bitset<8> toBinary(long long n)
{
    return bitset<8>(n);
}
int binaryToDecimal(long long n)
{
    long long num = n;
    long long dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}
int main()
{
    long long a;
    long long b;
    cin >> a >> b;
    a=binaryToDecimal(a);
    b=binaryToDecimal(b);
    a=a^b;
    string s;
    while(a!=1)
    {
        s=s+to_string(a%2);
        a=a/2;
    }
    s.push_back('1');
    
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}