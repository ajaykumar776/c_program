#include<stdio.h>

void main()
{
	int i, j, n=10, c;

	c=1;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++)
			printf("  ");
		for(j=0;j<=i;j++){
			printf("%2d  ", i+1);
		}
		printf("\n");
	}
}