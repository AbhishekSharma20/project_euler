/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<vector>
#include<algorithm>
typedef unsigned long long ull;

int max(int a,int b){
    if(a>b) return a;
    return b;
}

int main()
{
    int a[20][20];
    for(int i=0;i<20;i++)
        for(int j=0;j<20;j++)
            scanf("%d", &a[i][j]);
    
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++)
            printf("%d ", a[i][j]);
            printf("\n");
    }
    
    int global_max = 0, current_max=0;
    int p[10];
    for(int i=0;i<=16;i++){
        for(int j=0;j<=16; j++){
            current_max = 0;
            p[0] = a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
            p[1] = a[i][j+1]*a[i+1][j+1]*a[i+2][j+1]*a[i+3][j+1];
            p[2] = a[i][j+2]*a[i+1][j+2]*a[i+2][j+2]*a[i+3][j+2];
            p[3] = a[i][j+3]*a[i+1][j+3]*a[i+2][j+3]*a[i+3][j+3];
            p[4] = a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
            p[5] = a[i+1][j]*a[i+1][j+1]*a[i+1][j+2]*a[i+1][j+3];
            p[6] = a[i+2][j]*a[i+2][j+1]*a[i+2][j+2]*a[i+2][j+3];
            p[7] = a[i+3][j]*a[i+3][j+1]*a[i+3][j+2]*a[i+3][j+3];
            p[8] = a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
            p[9] = a[i][j+3]*a[i+1][j+2]*a[i+2][j+1]*a[i+3][j];
            for(int i=0;i<10;i++)
                current_max = max(current_max,p[i]);
            global_max = max(current_max, global_max);
            for(int i=0;i<10;i++)
                printf("%d ", p[i]);
            printf("\n");
        }
    }
    
    printf("%d\n", global_max);
}
