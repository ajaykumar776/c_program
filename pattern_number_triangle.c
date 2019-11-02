#include<stdio.h>

void main()
{
	int i,j, n=10,a=2;

	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",a);
			//a++;
		}
		printf("\n");
	}
	printf("\n");
}
