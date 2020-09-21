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
int main()
{
    ull product = 1;
    for(ull i=1;i<=20;i++){
        product = lcm(product,i);
        //cout<<product<<endl;
    }
    cout<<product<<endl;
    
    
}
