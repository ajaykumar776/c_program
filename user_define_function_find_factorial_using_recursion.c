#include <stdio.h>

int fact(int n){
	if(n==1) return 1;
	else{
		return n*fact(n-1);
	}
}

void main(){
	printf("%d\n", fact(3));
	printf("%d\n", fact(5));
}