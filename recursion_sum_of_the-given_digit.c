#include<stdio.h>
int sum(long int n);
void main()
{
	 long int n,s;
	printf("enter the value of n\n");
	scanf("%ld",&n);
	s=sum(n);
	printf("%ld\n",s );
}
int sum(long int n)
{
	int s;
	if(n==0)
		return 0;
	else
		s=n%10+sum(n/10);
	return s;
}