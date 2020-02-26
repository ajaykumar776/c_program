#include<stdio.h>
void arrange_in_accending(int arr[],int n);
void main()
{
    int arr[10];
    int i,s,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the array element \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    creat(arr,n);
}
void arrange_in_accending(int arr[],int n)
{
     
    int i,j,tem;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
            tem= arr[i];
            arr[i]=arr[j];
            arr[j]=tem;
            }
        }
    }
    printf("array element are arranged in accending order are \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i] );
    }
}
