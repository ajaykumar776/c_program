#include<stdio.h>
void main()

{
	int n,n1,i=1,rem,binary=0;
	printf("enter the value of n : \n");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		rem=n%2;
		n=n/2;
		binary=binary+(rem*i);
		i=i*10;
	}
	printf("binary of %d = %d\n",n1,binary );
}