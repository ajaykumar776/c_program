#include<stdio.h>

void main()
{
	
	int rem,n=12345;

	while(n){

		rem = n%10;
		printf("%d",rem);
		n/=10;
	}
}