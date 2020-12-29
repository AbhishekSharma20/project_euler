/******************
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
********************************/

#include <stdio.h>
#include<vector>
#include<cmath>
typedef unsigned long long ull;

ull getPrimeSumTillN(int n){
    int a[n]={0};
    a[0]=a[1]=1;
    int iter = ceil(sqrt(n));
    for(int i=2;i<=iter;i++){
        for(int j= 2; i*j <=n;j++){
            a[i*j] = 1;
        }
    }
    ull counter = 0;
    for(int i=2;i<=n;i++)
        if(a[i] == 0)   counter+= i;
    
    return counter;
}
int main()
{
    printf("%llu", getPrimeSumTillN(2000000));
    return 0;
}
