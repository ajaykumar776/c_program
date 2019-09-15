#include<stdio.h>

int sum(int n){

    int fact=0;
    if(n>0)
    fact= fact*fact(n-1);
    return fact;
}


void main()
{
    int n=10;
    printf("your sum is %d:",sum(n));




}
