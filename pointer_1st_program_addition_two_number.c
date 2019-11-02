#include<stdio.h>
void main()
{
   int i,j,*l,*m,sum,mul,div;
   printf("enter the value of i,j : \n");
   scanf("%d%d",&i,&j);
   l=&i;
   m=&j;
   sum=*l+*m;
   mul=*l**m;
   printf("your sum= %d\nyour mul is=%d:",sum,mul);



}
