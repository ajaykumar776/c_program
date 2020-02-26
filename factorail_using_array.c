#include<stdio.h>

void main()
{
   int i,n;
   int fact[100];
   fact[0]=1;
   printf("enter the value of n : \n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
        fact[i]=i*fact[i-1];
    }
    for(i=0;i<=n;i++)
    {
        printf("%d factorial is : %d\n",i,fact[i]);
    }
}
