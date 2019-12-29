#include<stdio.h>
void main()
{
    int i,a[10];
    int n;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array element");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int max=a[0],min=a[0];

    for(i=1;i<n;i++){
    if(max<a[i])
        max=a[i];
        if(min>a[i])
            min=a[i];}
    printf("%d %d",max,min);
}
