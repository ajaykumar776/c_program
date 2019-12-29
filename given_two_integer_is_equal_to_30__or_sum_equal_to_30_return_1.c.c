#include<stdio.h>
int test (int a,int b);
void main()
{
	int a,b;
	printf("enter the value of a b\n");
	scanf("%d%d",&a,&b);
	test(a,b);
	printf("%d\n",test(a,b));
}
int test(int a,int b)
{
	if(a==30||b==30||a+b==30){
		return 1;
	}
	else{
		return 0;
	}
}