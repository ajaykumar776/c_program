#include<stdio.h>
int fib(int n);
void main()
{
	int n, i;
	printf("enter the value of n \n");
	scanf("%d",&n);
	printf("your fibonacee series are : \n");
	for(i=1;i<=n;i++){
	
	printf("%d\n",fib(i) );
	}
}
int fib(int n)
{
if(n==1||n==2){

 return 1;
}
else{
	return fib(n-1)+fib(n-2);
	}
	
}