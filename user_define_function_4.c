#include<stdio.h>

int sum(int a, int b){
	int c = a+b;
	return c;
}

void main(){
	int a, b, c;
	c=sum(3, 5);
	printf("%d\n", c);

	printf("%d\n", sum(2, 3));	
}