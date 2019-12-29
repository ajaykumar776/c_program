#include<stdio.h>
void swap(int a,int b);
void main()
{
	int a,b;

	printf("enter the value of a,b\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping %d %d\n", a,b);
	swap(a,b);
}

void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("After swapping %d %d\n",a,b );

}