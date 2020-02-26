#include<stdio.h>
long int fib(long int n);
void main()
{
    long int n,i;
    printf("enter the value of n \n");
    scanf("%ld",&n);
    fib(n);
    for(i=1;i<=n;i++){
    printf("%ld\n",fib(i) );
}
}

long int fib(long int n)
{
    if(n==1||n==2){
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}