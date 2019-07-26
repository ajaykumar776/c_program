#include<stdio.h>
int fact( int n)
{
   int fact=1,i;
   for(i=1;i<=n;i++){
    fact=fact*i;
   }

   return(fact);

}
void main()
{

    int n ;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d",fact(n));
}
