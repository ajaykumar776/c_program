#include<stdio.h>
void main()
{
	int arr[20];
	int i,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter the array element\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[n-1-i] );

	}
}