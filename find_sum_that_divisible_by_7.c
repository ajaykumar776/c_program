#include<stdio.h>

void main()
{
	int i,n=100,sum=0,j=0;

	for (i=1;i<=n;i++)
	{
		if (i%7==0)
			sum=j++;
	}
	printf("%d",sum);

}