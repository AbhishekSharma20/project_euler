// Find the max products of its 13 adjacent digits from a 1000 digit number
#include <iostream>
#include<cstdio>
#include <string>
#include<vector>
#include<cmath>

using namespace std;
typedef vector<int> vi;

int main()
{
  char number[1001];
  scanf("%s", number);
  
  long prod,maxProd;
  maxProd=0;
  for(int i=12; i <1000; i++){
      prod=1;
      for(int j=0;j<13;j++) 
            prod*= (number[i-j]-'0');
      maxProd = max(prod, maxProd);
   }
  cout<<maxProd<<endl;
}
