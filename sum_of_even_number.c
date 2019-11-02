#include<stdio.h>

void main()

{
	int n,i,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);

	for (i=1;i<=n;i++){

		if(n%2==0){

			sum=sum+i;
		}

	} printf("sum is%d\n",sum);


}
