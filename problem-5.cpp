/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
// Example program
#include <iostream>
#include <string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef unsigned long long ull;

ull hcf(ull a, ull b){
    if(a > b) return hcf(b,a);
    if(b%a == 0) return a;
    return hcf(b%a, a);
}
ull lcm(ull a, ull b){
    return (a/hcf(a,b))*b;
}

ull lcm_1st_n_expensive(ull n){
    ull product = 1;
    for(ull i=1;i<=20;i++){
        product = lcm(product,i);
        //cout<<product<<endl;
    }   
    return product;
}
/**
 * for the logic: https://projecteuler.net/overview=005
 * 
**/

ull primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
ull lcm_1st_n_efficient(ull n){
    ull prod = 1;
    for(ull i =0;primes[i]<n;i++){
           if(primes[i] < sqrt(n)){
                prod *= pow(primes[i] , floor(log(n)/log(primes[i]))) ;
                //cout<<primes[i]<<"^"<<floor(log(n)/log(primes[i]))<<" * ";
           }else{
               prod *= primes[i];
               //cout<<primes[i]<<" * ";
           }
    }
    return prod;
}
int main()
{
    cout<<lcm_1st_n_efficient(20)<<endl;
    cout<<lcm_1st_n_expensive(20)<<endl;
    
    
}
