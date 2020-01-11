#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,*p=&a,*q=&b;
	printf("input two number\n");
	scanf("%d%d",&a,&b);
	if(*p>*q){
		printf("first value is greater =%d\n",*p);
	}
	else
	{
		printf("greater value will bre second no=%d\n",*q );
	}
}