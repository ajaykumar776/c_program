#include<stdio.h>
void main()
{
    int a[1000];
    int n=100,i,sum=0;
    for(i=0;i<=n;i++)
        a[i] = i;
    for(i=0;i<=n;i++){
        sum+=a[i];
    }
    printf("sum %d\n",sum);



}
