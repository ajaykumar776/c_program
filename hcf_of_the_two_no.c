#include<stdio.h>

void main()
{
	int a,b,hcf=1,i;
	printf("enter the value of a,b");
	scanf("%d %d",&a,&b);
	int min = (a<b)	? a:b;

	for(i=1;i<=min;i++){
		if (a%i==0 && b%i==0)
			hcf=i;

	}
	printf("hcf is %d\n",hcf);


    getch();
}
