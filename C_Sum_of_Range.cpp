#include<bits/stdc++.h>
using namespace std;

void sum_of_range(long long A, long long B){
    int first = min(A,B);
    int last = max(A,B);

    //All number sum: 
    long long sum=0;
    for(int i=first; i<=last; i++){
        sum+=i;
    }
    cout<<sum <<endl;

    //Even sum :
    int even_sum=0;
    for(int i=first; i<=last; i++){
        if(i%2 ==0){
            even_sum +=i;
        }
    }
    cout<<even_sum <<endl;

    //Odd sum:
    int odd_sum = 0;
    for(int i=first; i<=last; i++){
        if(i%2 !=0){
            odd_sum +=i;
        }
    }
    cout<<odd_sum <<endl;

}

int main()
{
    long long A,B;
    cin>>A >>B;

    sum_of_range(A,B);
    return 0;
}