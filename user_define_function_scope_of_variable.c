#include <stdio.h>

int n = 5;

int modify (){
	printf("from modify %d\n", n);
}

void main(){
	int n=6;
	modify();
	printf("from main %d\n", n);
}