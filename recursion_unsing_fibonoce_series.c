#include<stdio.h>
int fib(int n)
{
    while(n==1||n==2){
        return 1;
    }
    return (fib(n-1)+fib(n-2));
}
void main()
{
    int i,n=10;
        for(i=0;i<=n;i++){
        printf("%d ",fib(i));
    }

}
