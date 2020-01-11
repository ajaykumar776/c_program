#include<stdio.h>
#include<stdlib.h>
void main()
{
 int arr[10];

 arr=(int*)malloc(size(int));
 
 int tem ,i,j,n;
 printf("enter teh value of  n\n");
 scanf("%d",&n);
 printf("enter the array element \n");
 for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){

    if(*arr+i>*arr+j)

      tem=*arr+i;

      *(arr+i)=*(arr+j);

      *(arr+j)=tem;
  }

 }
 printf("sorted array are : \n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",*arr+i );
 }
}