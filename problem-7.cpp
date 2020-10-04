/*
* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
* What is the 10 001st prime number?
*/

// Example program
#include <iostream>
#include <string>
#include<vector>
#include<cmath>

using namespace std;
typedef vector<int> vi;

vi sieve(int n){
    int a[n+1] = {0};
    for(int i = 2;i<= floor(sqrt(n)); i++)
        for(int j=2; i*j<=n;j++)
            a[i*j] = 1;
    vi primes;
    for(int i= 2; i<=n; i++)
        if(a[i] == 0)
            primes.push_back(i);
    return primes;
}

int main()
{
  vi primes = sieve(1000000);
  cout<<primes.size()<<endl;
  cout<<primes[5]<<endl;
  cout<<primes[10000]<<endl;  //Solution
}
