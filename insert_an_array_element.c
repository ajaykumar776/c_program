#include<stdio.h>
void main()
{
    int arr[10];
    int i,n,p;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the array element \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elemnet whatever u want to assined \n");
    scanf("%d",&p);
    for(i=0;i<n;i++){
        arr[3]=p;
    }
    for(i=0;i<n;i++){
        
    printf("%d",arr[i]);
    }

}