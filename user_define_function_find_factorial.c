#include <stdio.h>

int fact(int n){
	int i, fact=1;

	for(i=1;i<=n;i++){
		fact = fact*i;
	}
	return fact;
}

void main(){
	printf("%d\n", fact(7));
	printf("%d\n", fact(5));
}
