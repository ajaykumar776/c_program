#include<stdio.h>
void main()
{

    int a,d,i,n;
    printf("enter the value of a,d,n: ");
    scanf("%d%d %d",&a,&d,&n);
    for(i=0;i<=n;i++){
     printf(" %d ",a);
        a=a+d;

    }
}
