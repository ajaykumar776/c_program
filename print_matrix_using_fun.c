#include<stdio.h>
void  matrix(int arr[3][3],int n,int m);
void main()
{
	int arr[3][3];
	int n,m,i,j;
	printf("enter the row and column\n");
	scanf("%d%d",&n,&m);
	printf("enter the matrix element\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	matrix(arr,n,m);
	//printf("%d\n",matrix(arr,n,m));
}
void matrix(int arr[3][3],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",arr[i][j] );
		}
		printf("\n");
		
	}
	
}