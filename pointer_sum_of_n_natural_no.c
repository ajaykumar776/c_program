#include<stdio.h>
void main()
{
  int arr[10];
  int sum,i;
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  printf("enter the array element \n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
      sum=sum+*arr+i;
    
  }
  printf("sum = %d\n",sum);


}