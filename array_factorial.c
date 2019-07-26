
#include<stdio.h>

void main(){
	int i, n=10, fact[100];

	fact[0]=1;

	for(i=1;i<n;i++){
		fact[i] = i * fact[i-1];
	}

	printf("%d\n", fact[5]);
	printf("%d\n", fact[5]);
	printf("%d\n", fact[3]);
	printf("%d\n", fact[4]);
	printf("%d\n", fact[1]);
}
