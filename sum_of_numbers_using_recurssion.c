#include<stdio.h>

int sum(int n){
    int sum1 = 0;
    if(n>0){
        sum1 = n + sum(n-2);
    }
    return sum1;
}


void main()
{

    int n = 10;

    printf("sum of even number  is %d.\n",sum(n));

}
