#include<bits/stdc++.h>
using namespace std;


void summation_divisors(long long &N){

    long long sum = 0;

    vector<long long> divisor;

    for(long long i=1; i*i<=N; i++){
        if(N%i == 0){
            sum +=i;

            if(i != N/i){
                sum += N/i;
            }
        }
    }
    cout<<sum;
}

int main()
{
    long long N;
    cin>>N;

    summation_divisors(N);
    return 0;
}