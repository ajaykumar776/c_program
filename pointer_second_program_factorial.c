#include<stdio.h>
void main()
{
    int num,fact,*p,*q;
    int i;
    p=&num;
    q=&fact;
    printf("enter the value of num");
    scanf("%d",p);
    fact=1;

    for(i=1;i<=*p;i++){
    *q=*q*i;
    }
    printf("fact of %d=%d",*p,*q);


}
