#include<stdio.h>
void mian()
{
    int a[10];
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the array elemnet ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i] );
    }
}