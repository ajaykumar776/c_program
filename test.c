#include<stdio.h>

void main()
{
	int i,j, n;
	n=5;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if (i==1||i==5){
			printf("s");
		}
		else{
			printf("  ");
		}

		}

	}
	printf("s");
}