#include<stdio.h>

int sum(int, int);

void main()
{
	printf("%d\n", sum(2, 3));
}

int sum(int a, int b){
	return a+b;
}