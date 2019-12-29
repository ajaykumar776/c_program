#include<stdio.h>
int array(int arr[],int n);
void main()
{
	int arr[10];
	int n,i;
	printf("enter the vallue of n\n");
	scanf("%d",&n);
	printf("enter array element \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	array(arr,n);
}

int array(int arr[],int n)
{
	int p,i ,flag;
	printf("enter the value of p\n");
	scanf("%d",&p);

		for(i=0;i<n;i++){
			if(arr[i]==p){
				p=flag;
			}
		}
		if(p==flag){
			printf("given number is present in the array\n");
		}else
		{
			printf("given number is not present in the \n");
		}
		return 0;
		
}
