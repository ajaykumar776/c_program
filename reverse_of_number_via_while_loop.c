#include<stdio.h>

void main()
{

	int rem,n;
	printf("enter the value  of n");
	scanf("%d",&n);

	while(n){

		rem = n%10;
		//printf("%d ",rem);
		n/=10;
	}
}
