
#include<stdio.h>

void main()

{

	int i,j,n=5,a=1;

	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%-3d",a);
			a++;
		}
		printf("\n");
	}
}