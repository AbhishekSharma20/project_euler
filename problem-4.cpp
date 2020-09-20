// Example program
#include <iostream>
#include <string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef unsigned long long ull;

int main()
{
    int num,num2;
    int maxnum=0;
    for(int a=1;a <=900;a++){
        for(int b=1; b<=a;b++){
            num = num2 = (1000 - a)*(1000 - b);
            //cout<<num<<" "<<1000-a<<" "<<1000-b<<endl;
            vector<int> arr;
            while(num){
                arr.push_back(num%10);
                num/=10;
            }
            int n = arr.size() -1;
            int m = 0;
            while(m<n){
                if(arr[m] != arr[n])
                    break;
                else{
                    m++;n--;
                }
            }
            if(m>=n){
                maxnum = max(num2,maxnum);
                //return 0;
            }
        }
    }
    cout<<maxnum<<endl;
}
