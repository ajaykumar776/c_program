#include<stdio.h>
int sum_of_two_no(int *a,int *b);
void main()
{
    int *a,*b,p,q,sum=0;
    printf("enter the value of p and q\n");
    scanf("%d%d",&p,&q);
    sum= sum_of_two_no(&p,&q);
    printf("%d\n", sum);
}
int sum_of_two_no(int *a,int *b)
{
    int sum;
    sum=*a-*b;
    return sum;
}
