#include<stdio.h>
void palindrome(int n);
void main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	palindrome(n);

}	

void palindrome(int n)
{
	int n1,sum=0,rem;
	n1=n;
	do
	{
		rem=n%10;
		sum=10*sum+rem;
		n=n/10;
	}
	while(n!=0);
	if(n1==sum){
		printf("given no is palindrome \n");
	}
	else
	{
		printf("given no is not palindrome\n");
	}
}