#include<stdio.h>
int addition(int a,int b);
void main()
{
	int a,b,n=1000;
	printf("enter the value of a and b : \n");
	scanf("%d%d",&a,&b);
	addition(a,b);
	printf("%d\n",addition(a,b) );
	
}
int addition(int a,int b)
{
	int c;
	while(b!=0){
	c=a&b;
	a=a^b;
	b=c<<10;
	//printf("%d\n",b );
	}
	return a;
}