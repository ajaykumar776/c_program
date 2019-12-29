#include<stdio.h>
void main()
{
	+nt r,check;
	long int n;
	printf("enter the value of n");
	scanf("%ld",&n);
	r=n%10;
	n=n/10;
	check=n+r*5;
	if(check%7==0){
		printf("multiple of 7");
	}else
	{
	printf("not multiple of 7");
	}

	
}