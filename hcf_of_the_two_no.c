#include<stdio.h>

void main()
{
	int a=3,b=5,hcf=1,i;
	int min = (a<b)	? a:b;

	for(i=2;i<=min;i++){
		if (a%i==0 && b%i==0)
			hcf=i;
		
	}
	printf("hcf is %d\n",hcf);


}