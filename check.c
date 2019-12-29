#include<stdio.h>
{

	int n,i.flag=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(n%i==0){
			flag=1;

		}
	}
	if(flag==1){
		printf("given number no is prime number\n");
	}else
	{
		printf("not prime number\n");
	}
}