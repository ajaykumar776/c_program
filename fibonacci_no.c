#include<stdio.h>

void main()
{

	int a,b,c,i,n;
	printf("enter the value of a b n ");
	scanf("%d %d %d ",&a,&b,&n);

	for(i=1;i<=n;i++){

		printf("%d \n",a);
		c = a+b;
		a=b;
		b =c;
	}
}
