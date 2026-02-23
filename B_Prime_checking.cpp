#include<bits/stdc++.h>
using namespace std;
 
void prime_check(long long n){
    
    for(long long i=2; i*i<=n; i++){
        if(n%i==0){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}

int main()
{
    long long n;
    cin>>n;

    prime_check(n);
    return 0;
}