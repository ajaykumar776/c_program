#include<stdio.h>
void fact(int n);
void main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	fact(n);

}
void fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("%d\n",fact );
}