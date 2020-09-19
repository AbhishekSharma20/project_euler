/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

// Example program
#include <iostream>
#include <string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef unsigned long long ull;
ull n = 600851475143;
//ull n = 13195;

int main()
{
   ull pf = 1;
   for(ull i = 2; i<= ceil(sqrt(n)); i++){
        while(n%i == 0){
            n /=  i;
            pf  = i;
            //cout<<i<<" ";
        }
   }
   //cout<<n<<endl;
   cout<<max(n,pf)<<endl;
}
