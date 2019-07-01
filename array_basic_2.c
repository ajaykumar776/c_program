#include<stdio.h>

void main(){
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(a[0]);
	int i, sum=0;

	for(i=0;i<n;i++){
		sum += a[i];
	}

	printf("%d\n", sum);
}