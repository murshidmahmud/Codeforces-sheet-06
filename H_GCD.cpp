#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a >>b;

    long long x =a;
    long long y =b;

    while (b!=0)
    {
        long long gcm = a%b;
        a = b;
        b = gcm;
    }
    long long gcd = a;
    long long lcm = (x*y)/gcd;
    cout<<gcd <<" ";
    cout<<lcm;
    return 0;
}