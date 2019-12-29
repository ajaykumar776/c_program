#include<stdio.h>
int fact (int n);
void main()
{
	int n,r;
	float ncr;
	printf("enter the value of n r\n");
	scanf("%d%d",&n,&r);
	ncr=fact(n)/(fact(r)*fact(n-r));
	printf("ncr=%f\n",ncr );
}
int fact (int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return (f);
}