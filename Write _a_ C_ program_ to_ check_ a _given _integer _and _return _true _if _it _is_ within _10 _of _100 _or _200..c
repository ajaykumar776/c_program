#include<stdio.h>
#include<stdlib.h>
int test(int a);
void main()
{
	int a;
	printf("enter the value a\n");
	scanf("%d",&a);
	test( a);
	printf("%d\n",test(a) );
}
int test(int a)
{
	 if(abs(a - 100) <= 10 || abs(a- 200) <= 10)
	 {
		return 1;

	}else {

		return 0;
	}
	
}