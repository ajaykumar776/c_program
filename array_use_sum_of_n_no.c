#include<stdio.h>
void main()
{
int a[10];
int n=100,sum=0,i;
printf("enter the array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum+=a[i];
printf("%d",sum);

}
