#include<stdio.h>
void main()
{
  int n,*p=&n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  if(*p%2==0)
  {

    printf("even no\n");
  }
  else
  {
    printf("odd no\n");
  }
}