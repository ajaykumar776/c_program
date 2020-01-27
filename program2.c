#include<stdio.h>
#include<math.h>
void main()
{
    int n,r,n1;
    int i,c,sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    n1=n;
    while(n>0){
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;

    }
    printf("sum =%d\n\n",sum );
    if(n1==sum){
        printf("given number  is armstrong \n");

    }else
    {
        printf("given number  is not armstrong \n");
    }


}