#include<stdio.h>

int table(int n)
{
    int i,mul;
    for (i=1;i<=10;i++){
        mul=i*n;
        printf(" %2d * %2d = %2d \n",n,i,mul);
        }


}


void main()

{
	int n,i,mul=1;
	printf("enter the value of n");
	scanf("%d",&n);
	table(n);


}

