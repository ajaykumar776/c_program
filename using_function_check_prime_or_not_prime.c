#include<stdio.h>

 int prime( int n)
{
    int flag=0;
    int i;
   for(i=2;i<n;i++){
        if(n%i==0)
        flag=1;
   }
        if(flag==1){
        printf("is non prime ");
        }
    else
        printf(" is prime ");

   return n;

}

void main()

{
    int n,p;
    printf("enter the value of n: ");
    scanf("%d",&n);
    p=prime(n);
    printf("%d",p);

}



