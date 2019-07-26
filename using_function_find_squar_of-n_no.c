#include<stdio.h>
int squar( int n)
{
   int y;
   y=n*n;
   return(y);

}
void main()
{

    int n,y;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d",squar(n));
}
