#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    long long x;

    cin>>n >>x;

    long long divisible =0;

    for(int i=0; i< n.size(); i++){
        divisible = (divisible *10 +(n[i] - '0')) % x;
    }

    if(divisible==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}