#include<stdio.h>
void main()

{
  int i,n,f,m,l,arr[100],p;
  printf("enter value of n \n");
  scanf("%d",&n);
  printf("enter the all %d  integer sorted order \n",n );
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("enter value to find or search");
  scanf("%d",&p);
  //printf("%d",p );
  f=0;
  l=n-1;
  m=(f+l)/2;
  printf("%d\n",m );
  while(f<=l)
  {
    if(arr[m]<p){
      f=m+1;
    }else if(arr[m]==p){
      printf("%d found at location %d\n",p,m+1 );
      break;
    }
    else
    {
      l=m-1;
      m=(f+l)/2;
    }
    if(f>l)
    {
      printf("%d is not found in the array \n", p);
    }

  }
}