#include<stdio.h>
int fact(int arr[],int n);
void main()
{
	int arr[10];
	int i,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter the array element \n");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	fact(arr,n);
	printf("%d\n",fact(arr,n));
}
int fact(int arr[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	return sum;
}

