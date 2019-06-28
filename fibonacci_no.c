#include<stdio.h>

void main()
{
	
	int a=0,b=1,c,i,n=10;

	for(i=1;i<=n;i++){
		
		printf("%d ",a);
		c = a+b;
		a=b;
		b =c;
	}
}